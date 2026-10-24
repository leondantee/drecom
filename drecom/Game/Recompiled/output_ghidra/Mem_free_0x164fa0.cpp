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

// Function: Mem_free
// Address: 0x164fa0 - 0x165014
void Mem_free_0x164fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mem_free_0x164fa0");
#endif

    switch (ctx->pc) {
        case 0x164fccu: goto label_164fcc;
        default: break;
    }

    ctx->pc = 0x164fa0u;

    // 0x164fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164fa4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x164fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x164fa8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164fac: 0x8c235488  lw          $v1, 0x5488($at)
    ctx->pc = 0x164facu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5488u));
    // 0x164fb0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x164FB0u;
    {
        const bool branch_taken_0x164fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164fb0) {
            ctx->pc = 0x164FD4u;
            goto label_164fd4;
        }
    }
    ctx->pc = 0x164FB8u;
    // 0x164fb8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x164fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x164fbc: 0x2444eab0  addiu       $a0, $v0, -0x1550
    ctx->pc = 0x164fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961840));
    // 0x164fc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x164fc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164fc4: 0xc059c48  jal         func_167120
    ctx->pc = 0x164FC4u;
    SET_GPR_U32(ctx, 31, 0x164FCCu);
    ctx->pc = 0x167120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167120u, 0x164FC4u, 0x164FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FCCu;
label_164fcc:
    // 0x164fcc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x164FCCu;
    {
        const bool branch_taken_0x164fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164fcc) {
            ctx->pc = 0x165004u;
            goto label_165004;
        }
    }
    ctx->pc = 0x164FD4u;
label_164fd4:
    // 0x164fd4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164fd8: 0x8c235488  lw          $v1, 0x5488($at)
    ctx->pc = 0x164fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5488u));
    // 0x164fdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x164fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x164fe0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164fe4: 0xac235488  sw          $v1, 0x5488($at)
    ctx->pc = 0x164fe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F5488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5488u, _value); } while (0);
    // 0x164fe8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x164fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164fec: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x164fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x164ff0: 0x24635490  addiu       $v1, $v1, 0x5490
    ctx->pc = 0x164ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21648));
    // 0x164ff4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164ff8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x164ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164ffc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165000: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x165000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
label_165004:
    // 0x165004: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x165004u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165008: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x165008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16500c: 0x3e00008  jr          $ra
    ctx->pc = 0x16500Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16500Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165014u;
}
