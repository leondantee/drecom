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

// Function: entry_001ccce0
// Address: 0x1ccce0 - 0x1ccd5c
void entry_001ccce0_0x1ccce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccce0_0x1ccce0");
#endif

    switch (ctx->pc) {
        case 0x1ccd58u: goto label_1ccd58;
        default: break;
    }

    ctx->pc = 0x1ccce0u;

    // 0x1ccce0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccce4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ccce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ccce8: 0x106003a1  beqz        $v1, . + 4 + (0x3A1 << 2)
    ctx->pc = 0x1CCCE8u;
    {
        const bool branch_taken_0x1ccce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccce8) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CCCF0u;
    // 0x1cccf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cccf4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cccf8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1cccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1cccfc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cccfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ccd00: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CCD00u;
    {
        const bool branch_taken_0x1ccd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd00) {
            ctx->pc = 0x1CCDC4u;
            return;
        }
    }
    ctx->pc = 0x1CCD08u;
    // 0x1ccd08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ccd08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccd0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd10: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1ccd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1ccd14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd18: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1ccd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd20: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ccd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1ccd24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd28: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ccd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd30: 0xe4801570  swc1        $f0, 0x1570($a0)
    ctx->pc = 0x1ccd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5488), bits); }
    // 0x1ccd34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd38: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1ccd38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ccd3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd40: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1ccd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1ccd44: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCD44u;
    {
        const bool branch_taken_0x1ccd44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd44) {
            ctx->pc = 0x1CCD5Cu;
            return;
        }
    }
    ctx->pc = 0x1CCD4Cu;
    // 0x1ccd4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd50: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CCD50u;
    SET_GPR_U32(ctx, 31, 0x1CCD58u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CCD50u, 0x1CCD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD58u;
label_1ccd58:
    // 0x1ccd58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ccd58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ccd5cu;
}
