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

// Function: entry_001210bc
// Address: 0x1210bc - 0x121118
void entry_001210bc_0x1210bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001210bc_0x1210bc");
#endif

    ctx->pc = 0x1210bcu;

label_1210bc:
    // 0x1210bc: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1210bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1210c0:
    // 0x1210c0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1210c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_1210c4:
    // 0x1210c4: 0x34660fdb  ori         $a2, $v1, 0xFDB
    ctx->pc = 0x1210c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1210c8:
    // 0x1210c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1210c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1210cc:
    // 0x1210cc: 0x0  nop
    ctx->pc = 0x1210ccu;
    // NOP
label_1210d0:
    // 0x1210d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1210d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1210d4:
    // 0x1210d4: 0x0  nop
    ctx->pc = 0x1210d4u;
    // NOP
label_1210d8:
    // 0x1210d8: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_1210dc:
    if (ctx->pc == 0x1210DCu) {
        ctx->pc = 0x1210E0u;
        goto label_1210e0;
    }
    ctx->pc = 0x1210D8u;
    {
        const bool branch_taken_0x1210d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1210d8) {
            ctx->pc = 0x121190u;
            return;
        }
    }
    ctx->pc = 0x1210E0u;
label_1210e0:
    // 0x1210e0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1210e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1210e4:
    // 0x1210e4: 0x948511f6  lhu         $a1, 0x11F6($a0)
    ctx->pc = 0x1210e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
label_1210e8:
    // 0x1210e8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1210e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1210ec:
    // 0x1210ec: 0x2064fff6  addi        $a0, $v1, -0xA
    ctx->pc = 0x1210ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967286, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1210f0:
    // 0x1210f0: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x1210f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1210f4:
    // 0x1210f4: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_1210f8:
    if (ctx->pc == 0x1210F8u) {
        ctx->pc = 0x1210FCu;
        goto label_1210fc;
    }
    ctx->pc = 0x1210F4u;
    {
        const bool branch_taken_0x1210f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1210f4) {
            ctx->pc = 0x121190u;
            return;
        }
    }
    ctx->pc = 0x1210FCu;
label_1210fc:
    // 0x1210fc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1210fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_121100:
    // 0x121100: 0x2465e150  addiu       $a1, $v1, -0x1EB0
    ctx->pc = 0x121100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959440));
label_121104:
    // 0x121104: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x121104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_121108:
    // 0x121108: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x121108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_12110c:
    // 0x12110c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_121110:
    // 0x121110: 0x800008  jr          $a0
label_121114:
    if (ctx->pc == 0x121114u) {
        ctx->pc = 0x121118u;
        goto label_fallthrough_0x121110;
    }
    ctx->pc = 0x121110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x121110:
    ctx->pc = 0x121118u;
}
