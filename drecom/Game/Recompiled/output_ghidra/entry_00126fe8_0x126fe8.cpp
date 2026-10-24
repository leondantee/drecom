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

// Function: entry_00126fe8
// Address: 0x126fe8 - 0x127048
void entry_00126fe8_0x126fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126fe8_0x126fe8");
#endif

    switch (ctx->pc) {
        case 0x127018u: goto label_127018;
        default: break;
    }

    ctx->pc = 0x126fe8u;

label_126fe8:
    // 0x126fe8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126fec:
    // 0x126fec: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x126fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126ff0:
    // 0x126ff0: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x126ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
label_126ff4:
    // 0x126ff4: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x126ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
label_126ff8:
    // 0x126ff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126ffc:
    // 0x126ffc: 0x0  nop
    ctx->pc = 0x126ffcu;
    // NOP
label_127000:
    // 0x127000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127004:
    // 0x127004: 0x0  nop
    ctx->pc = 0x127004u;
    // NOP
label_127008:
    // 0x127008: 0x450000da  bc1f        . + 4 + (0xDA << 2)
label_12700c:
    if (ctx->pc == 0x12700Cu) {
        ctx->pc = 0x127010u;
        goto label_127010;
    }
    ctx->pc = 0x127008u;
    {
        const bool branch_taken_0x127008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127008) {
            ctx->pc = 0x127374u;
            return;
        }
    }
    ctx->pc = 0x127010u;
label_127010:
    // 0x127010: 0xc067694  jal         func_19DA50
label_127014:
    if (ctx->pc == 0x127014u) {
        ctx->pc = 0x127018u;
        goto label_127018;
    }
    ctx->pc = 0x127010u;
    SET_GPR_U32(ctx, 31, 0x127018u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127010u, 0x127018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127018u;
label_127018:
    // 0x127018: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12701c:
    // 0x12701c: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x12701cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_127020:
    // 0x127020: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x127020u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_127024:
    // 0x127024: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_127028:
    if (ctx->pc == 0x127028u) {
        ctx->pc = 0x12702Cu;
        goto label_12702c;
    }
    ctx->pc = 0x127024u;
    {
        const bool branch_taken_0x127024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127024) {
            ctx->pc = 0x127124u;
            return;
        }
    }
    ctx->pc = 0x12702Cu;
label_12702c:
    // 0x12702c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12702cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_127030:
    // 0x127030: 0x2464e2a0  addiu       $a0, $v1, -0x1D60
    ctx->pc = 0x127030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959776));
label_127034:
    // 0x127034: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x127034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_127038:
    // 0x127038: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x127038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12703c:
    // 0x12703c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_127040:
    // 0x127040: 0x600008  jr          $v1
label_127044:
    if (ctx->pc == 0x127044u) {
        ctx->pc = 0x127048u;
        goto label_fallthrough_0x127040;
    }
    ctx->pc = 0x127040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127040u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x127040:
    ctx->pc = 0x127048u;
}
