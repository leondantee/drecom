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

// Function: caseD_1
// Address: 0x1cea20 - 0x1ceaa0
void caseD_1_0x1cea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1cea20");
#endif

    switch (ctx->pc) {
        case 0x1cea6cu: goto label_1cea6c;
        case 0x1cea98u: goto label_1cea98;
        default: break;
    }

    ctx->pc = 0x1cea20u;

    // 0x1cea20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cea24: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1cea24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1cea28: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CEA28u;
    {
        const bool branch_taken_0x1cea28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cea28) {
            ctx->pc = 0x1CEAA0u;
            return;
        }
    }
    ctx->pc = 0x1CEA30u;
    // 0x1cea30: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cea30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cea34: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x1cea34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1cea38: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1cea38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cea3c: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x1cea3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cea40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cea44: 0x8c6513e8  lw          $a1, 0x13E8($v1)
    ctx->pc = 0x1cea44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cea48: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CEA48u;
    {
        const bool branch_taken_0x1cea48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cea48) {
            ctx->pc = 0x1CEAA0u;
            return;
        }
    }
    ctx->pc = 0x1CEA50u;
    // 0x1cea50: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cea50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cea54: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cea54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cea58: 0x8ce813e8  lw          $t0, 0x13E8($a3)
    ctx->pc = 0x1cea58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 5096)));
    // 0x1cea5c: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x1cea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x1cea60: 0x25050120  addiu       $a1, $t0, 0x120
    ctx->pc = 0x1cea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
    // 0x1cea64: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CEA64u;
    SET_GPR_U32(ctx, 31, 0x1CEA6Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CEA64u, 0x1CEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA6Cu;
label_1cea6c:
    // 0x1cea6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cea70: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cea70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1cea74: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cea74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cea78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cea7c: 0x3c043e49  lui         $a0, 0x3E49
    ctx->pc = 0x1cea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15945 << 16));
    // 0x1cea80: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x1cea80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1cea84: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1cea84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cea88: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1cea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cea8c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1cea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cea90: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CEA90u;
    SET_GPR_U32(ctx, 31, 0x1CEA98u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CEA90u, 0x1CEA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA98u;
label_1cea98:
    // 0x1cea98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cea9c: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->pc = 0x1ceaa0u;
}
