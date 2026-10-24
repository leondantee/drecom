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

// Function: entry_0034bdd4
// Address: 0x34bdd4 - 0x34be5c
void entry_0034bdd4_0x34bdd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034bdd4_0x34bdd4");
#endif

    ctx->pc = 0x34bdd4u;

    // 0x34bdd4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bdd8: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x34bdd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x34bddc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34bddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34bde0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x34bde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x34bde4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34BDE4u;
    {
        const bool branch_taken_0x34bde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bde4) {
            ctx->pc = 0x34BE5Cu;
            return;
        }
    }
    ctx->pc = 0x34BDECu;
    // 0x34bdec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bdf0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bdf4: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34bdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bdf8: 0x8fb00098  lw          $s0, 0x98($sp)
    ctx->pc = 0x34bdf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bdfc: 0x26051330  addiu       $a1, $s0, 0x1330
    ctx->pc = 0x34bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34be00: 0xa0a00029  sb          $zero, 0x29($a1)
    ctx->pc = 0x34be00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x34be04: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x34be04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x34be08: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x34be08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34be0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34be0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34be10: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34be10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34be14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34be14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34be18: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34be18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34be1c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34be20: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x34be20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x34be24: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34be24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34be28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34be2c: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x34BE2Cu;
    {
        const bool branch_taken_0x34be2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34be2c) {
            ctx->pc = 0x34BE5Cu;
            return;
        }
    }
    ctx->pc = 0x34BE34u;
    // 0x34be34: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34be38: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34be38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34be3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34be40: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x34be40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x34be44: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34be44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34be48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34be48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34be4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34be4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34be50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34be50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34be54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34be54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34be58: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34be58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    ctx->pc = 0x34be5cu;
}
