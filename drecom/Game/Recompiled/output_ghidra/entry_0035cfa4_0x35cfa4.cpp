#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0035cfa4
// Address: 0x35cfa4 - 0x35d038
void entry_0035cfa4_0x35cfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035cfa4_0x35cfa4");
#endif

    switch (ctx->pc) {
        case 0x35cff0u: goto label_35cff0;
        case 0x35d010u: goto label_35d010;
        default: break;
    }

    ctx->pc = 0x35cfa4u;

label_35cfa4:
    // 0x35cfa4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cfa8: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x35cfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x35cfac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x35cfb0: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x35CFB0u;
    {
        const bool branch_taken_0x35cfb0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35cfb0) {
            ctx->pc = 0x35CFA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cfa4;
        }
    }
    ctx->pc = 0x35CFB8u;
    // 0x35cfb8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cfbc: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x35cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x35cfc0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x35cfc0u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 20));
    // 0x35cfc4: 0x8e030288  lw          $v1, 0x288($s0)
    ctx->pc = 0x35cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x35cfc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cfcc: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x35cfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x35cfd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35cfd0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 3));
    // 0x35cfd4: 0x8e030284  lw          $v1, 0x284($s0)
    ctx->pc = 0x35cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x35cfd8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cfdc: 0x3442b430  ori         $v0, $v0, 0xB430
    ctx->pc = 0x35cfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46128);
    // 0x35cfe0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35cfe0u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 3));
    // 0x35cfe4: 0x8e04028c  lw          $a0, 0x28C($s0)
    ctx->pc = 0x35cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x35cfe8: 0xc0d7320  jal         func_35CC80
    ctx->pc = 0x35CFE8u;
    SET_GPR_U32(ctx, 31, 0x35CFF0u);
    ctx->pc = 0x35CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CC80u, 0x35CFE8u, 0x35CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CFF0u;
label_35cff0:
    // 0x35cff0: 0x8e0302a0  lw          $v1, 0x2A0($s0)
    ctx->pc = 0x35cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 672)));
    // 0x35cff4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cff8: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x35cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x35cffc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35cffcu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x35d000: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x35d000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x35d004: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35d004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x35d008: 0xc084a90  jal         func_212A40
    ctx->pc = 0x35D008u;
    SET_GPR_U32(ctx, 31, 0x35D010u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x35D010u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35D010u) { return; }
    ctx->pc = 0x35D010u;
label_35d010:
    // 0x35d010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d014: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x35d014u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35d018: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35d018u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35d01c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35d01cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d020: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35d020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d02c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x35d02cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35d030: 0x3e00008  jr          $ra
    ctx->pc = 0x35D030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D038u;
}
