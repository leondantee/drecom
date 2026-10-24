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

// Function: entry_0023e464
// Address: 0x23e464 - 0x23e530
void entry_0023e464_0x23e464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e464_0x23e464");
#endif

    switch (ctx->pc) {
        case 0x23e4b4u: goto label_23e4b4;
        case 0x23e4e8u: goto label_23e4e8;
        default: break;
    }

    ctx->pc = 0x23e464u;

    // 0x23e464: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e468: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e46c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x23e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x23e470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e474: 0x0  nop
    ctx->pc = 0x23e474u;
    // NOP
    // 0x23e478: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e47c: 0x0  nop
    ctx->pc = 0x23e47cu;
    // NOP
    // 0x23e480: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x23E480u;
    {
        const bool branch_taken_0x23e480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e480) {
            ctx->pc = 0x23E530u;
            return;
        }
    }
    ctx->pc = 0x23E488u;
    // 0x23e488: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x23e488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x23e48c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23e48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23e490: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23e490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e494: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e498: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e49c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23e4a0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23e4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e4a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e4a8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23e4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e4ac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E4ACu;
    SET_GPR_U32(ctx, 31, 0x23E4B4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E4ACu, 0x23E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4B4u;
label_23e4b4:
    // 0x23e4b4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23E4B4u;
    {
        const bool branch_taken_0x23e4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e4b4) {
            ctx->pc = 0x23E530u;
            return;
        }
    }
    ctx->pc = 0x23E4BCu;
    // 0x23e4bc: 0x3c024032  lui         $v0, 0x4032
    ctx->pc = 0x23e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16434 << 16));
    // 0x23e4c0: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x23e4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x23e4c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23e4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e4c8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e4cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e4d0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23e4d4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23e4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e4d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e4dc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23e4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e4e0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E4E0u;
    SET_GPR_U32(ctx, 31, 0x23E4E8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E4E0u, 0x23E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4E8u;
label_23e4e8:
    // 0x23e4e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23E4E8u;
    {
        const bool branch_taken_0x23e4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e4e8) {
            ctx->pc = 0x23E530u;
            return;
        }
    }
    ctx->pc = 0x23E4F0u;
    // 0x23e4f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e4f4: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x23e4f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x23e4f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E4F8u;
    {
        const bool branch_taken_0x23e4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e4f8) {
            ctx->pc = 0x23E530u;
            return;
        }
    }
    ctx->pc = 0x23E500u;
    // 0x23e500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e504: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e508: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23e508u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e50c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23e510: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e514: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23e514u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e518: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e51c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23e51cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e520: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e524: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23e524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e528: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e52c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23e530u;
}
