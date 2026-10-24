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

// Function: MpegRestartDmaCallBack
// Address: 0x35cec0 - 0x35d038
void MpegRestartDmaCallBack_0x35cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MpegRestartDmaCallBack_0x35cec0");
#endif

    switch (ctx->pc) {
        case 0x35cf20u: goto label_35cf20;
        case 0x35cf84u: goto label_35cf84;
        case 0x35cfa4u: goto label_35cfa4;
        case 0x35cff0u: goto label_35cff0;
        case 0x35d010u: goto label_35d010;
        default: break;
    }

    ctx->pc = 0x35cec0u;

    // 0x35cec0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35cec4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x35cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x35cec8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35cec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35cecc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35ced0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35ced0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35ced4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ced4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ced8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ced8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35cedc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x35cee0: 0x2450c100  addiu       $s0, $v0, -0x3F00
    ctx->pc = 0x35cee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x35cee4: 0x8e02029c  lw          $v0, 0x29C($s0)
    ctx->pc = 0x35cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC39Cu));
    // 0x35cee8: 0x3053007f  andi        $s3, $v0, 0x7F
    ctx->pc = 0x35cee8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x35ceec: 0x8e02029c  lw          $v0, 0x29C($s0)
    ctx->pc = 0x35ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC39Cu));
    // 0x35cef0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x35cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x35cef4: 0x30510003  andi        $s1, $v0, 0x3
    ctx->pc = 0x35cef4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x35cef8: 0x8e02029c  lw          $v0, 0x29C($s0)
    ctx->pc = 0x35cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x35cefc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x35cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x35cf00: 0x3052000f  andi        $s2, $v0, 0xF
    ctx->pc = 0x35cf00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x35cf04: 0x8e030280  lw          $v1, 0x280($s0)
    ctx->pc = 0x35cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x35cf08: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x35cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x35cf0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35cf10: 0x62a023  subu        $s4, $v1, $v0
    ctx->pc = 0x35cf10u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35cf14: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x35cf18: 0xc084a98  jal         func_212A60
    ctx->pc = 0x35CF18u;
    SET_GPR_U32(ctx, 31, 0x35CF20u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x35CF20u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CF20u) { return; }
    ctx->pc = 0x35CF20u;
label_35cf20:
    // 0x35cf20: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x35cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x35cf24: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x35cf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x35cf28: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x35cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    // 0x35cf2c: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x35cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x35cf30: 0x8e020288  lw          $v0, 0x288($s0)
    ctx->pc = 0x35cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x35cf34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35cf38: 0xae020288  sw          $v0, 0x288($s0)
    ctx->pc = 0x35cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 2));
    // 0x35cf3c: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x35cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x35cf40: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35CF40u;
    {
        const bool branch_taken_0x35cf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cf40) {
            ctx->pc = 0x35CF84u;
            goto label_35cf84;
        }
    }
    ctx->pc = 0x35CF48u;
    // 0x35cf48: 0x8e020294  lw          $v0, 0x294($s0)
    ctx->pc = 0x35cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x35cf4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35CF4Cu;
    {
        const bool branch_taken_0x35cf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cf4c) {
            ctx->pc = 0x35CF84u;
            goto label_35cf84;
        }
    }
    ctx->pc = 0x35CF54u;
    // 0x35cf54: 0x8e030290  lw          $v1, 0x290($s0)
    ctx->pc = 0x35cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x35cf58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cf5c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x35cf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x35cf60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35cf60u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 3));
    // 0x35cf64: 0x8e030294  lw          $v1, 0x294($s0)
    ctx->pc = 0x35cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x35cf68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cf6c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x35cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x35cf70: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35cf70u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3));
    // 0x35cf74: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x35cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x35cf78: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x35cf78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x35cf7c: 0xc0d7300  jal         func_35CC00
    ctx->pc = 0x35CF7Cu;
    SET_GPR_U32(ctx, 31, 0x35CF84u);
    ctx->pc = 0x35CC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CC00u, 0x35CF7Cu, 0x35CF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF84u;
label_35cf84:
    // 0x35cf84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cf88: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x35cf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x35cf8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x35cf90: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x35CF90u;
    {
        const bool branch_taken_0x35cf90 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35cf90) {
            ctx->pc = 0x35CF84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cf84;
        }
    }
    ctx->pc = 0x35CF98u;
    // 0x35cf98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cf9c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x35cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x35cfa0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x35cfa0u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 19));
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
