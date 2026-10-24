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

// Function: entry_0034bd88
// Address: 0x34bd88 - 0x34bdd4
void entry_0034bd88_0x34bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034bd88_0x34bd88");
#endif

    ctx->pc = 0x34bd88u;

    // 0x34bd88: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd8c: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x34bd8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x34bd90: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34bd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34bd94: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x34bd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x34bd98: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34BD98u;
    {
        const bool branch_taken_0x34bd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd98) {
            ctx->pc = 0x34BDD4u;
            return;
        }
    }
    ctx->pc = 0x34BDA0u;
    // 0x34bda0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bda4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34bda8: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34bda8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bdac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34bdb0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bdb4: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34bdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34bdb8: 0xa0a30029  sb          $v1, 0x29($a1)
    ctx->pc = 0x34bdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x34bdbc: 0x3c073ccc  lui         $a3, 0x3CCC
    ctx->pc = 0x34bdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15564 << 16));
    // 0x34bdc0: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x34bdc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x34bdc4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x34bdc4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34bdc8: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x34bdc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bdcc: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x34bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x34bdd0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    ctx->pc = 0x34bdd4u;
}
