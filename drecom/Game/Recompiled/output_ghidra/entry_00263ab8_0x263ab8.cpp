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

// Function: entry_00263ab8
// Address: 0x263ab8 - 0x263b00
void entry_00263ab8_0x263ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263ab8_0x263ab8");
#endif

    switch (ctx->pc) {
        case 0x263ad4u: goto label_263ad4;
        default: break;
    }

    ctx->pc = 0x263ab8u;

    // 0x263ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263abc: 0xa7a2005a  sh          $v0, 0x5A($sp)
    ctx->pc = 0x263abcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 90), (uint16_t)GPR_U32(ctx, 2));
    // 0x263ac0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x263ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x263ac4: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x263ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x263ac8: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x263ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x263acc: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x263ACCu;
    SET_GPR_U32(ctx, 31, 0x263AD4u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x263ACCu, 0x263AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AD4u;
label_263ad4:
    // 0x263ad4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x263ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263ad8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263adc: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x263adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x263ae0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x263ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263ae4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263ae8: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x263ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x263aec: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x263aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263af0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263af4: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x263af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x263af8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x263AF8u;
    {
        const bool branch_taken_0x263af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263af8) {
            ctx->pc = 0x263BD8u;
            return;
        }
    }
    ctx->pc = 0x263B00u;
}
