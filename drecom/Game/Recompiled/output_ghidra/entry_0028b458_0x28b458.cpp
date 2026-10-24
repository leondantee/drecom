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

// Function: entry_0028b458
// Address: 0x28b458 - 0x28b4c0
void entry_0028b458_0x28b458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b458_0x28b458");
#endif

    ctx->pc = 0x28b458u;

    // 0x28b458: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b45c: 0x8c262048  lw          $a2, 0x2048($at)
    ctx->pc = 0x28b45cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x622048u));
    // 0x28b460: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x28b460u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x28b464: 0x34e30011  ori         $v1, $a3, 0x11
    ctx->pc = 0x28b464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17);
    // 0x28b468: 0x10c30148  beq         $a2, $v1, . + 4 + (0x148 << 2)
    ctx->pc = 0x28B468u;
    {
        const bool branch_taken_0x28b468 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x28b468) {
            ctx->pc = 0x28B98Cu;
            return;
        }
    }
    ctx->pc = 0x28B470u;
    // 0x28b470: 0x2408008d  addiu       $t0, $zero, 0x8D
    ctx->pc = 0x28b470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x28b474: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b478: 0x8c262048  lw          $a2, 0x2048($at)
    ctx->pc = 0x28b478u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x622048u));
    // 0x28b47c: 0xa0c8011c  sb          $t0, 0x11C($a2)
    ctx->pc = 0x28b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 284), (uint8_t)GPR_U32(ctx, 8));
    // 0x28b480: 0x8e435dc0  lw          $v1, 0x5DC0($s2)
    ctx->pc = 0x28b480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x28b484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28b484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b488: 0x1066000d  beq         $v1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x28B488u;
    {
        const bool branch_taken_0x28b488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x28b488) {
            ctx->pc = 0x28B4C0u;
            return;
        }
    }
    ctx->pc = 0x28B490u;
    // 0x28b490: 0x82485dea  lb          $t0, 0x5DEA($s2)
    ctx->pc = 0x28b490u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x28b494: 0x83e3c  dsll32      $a3, $t0, 24
    ctx->pc = 0x28b494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 24));
    // 0x28b498: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x28b498u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x28b49c: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B49Cu;
    {
        const bool branch_taken_0x28b49c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b49c) {
            ctx->pc = 0x28B4C0u;
            return;
        }
    }
    ctx->pc = 0x28B4A4u;
    // 0x28b4a4: 0x3c064220  lui         $a2, 0x4220
    ctx->pc = 0x28b4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16928 << 16));
    // 0x28b4a8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28b4a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b4ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b4b0: 0x8c232048  lw          $v1, 0x2048($at)
    ctx->pc = 0x28b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622048u));
    // 0x28b4b4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x28b4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x28b4b8: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x28B4B8u;
    {
        const bool branch_taken_0x28b4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b4b8) {
            ctx->pc = 0x28B98Cu;
            return;
        }
    }
    ctx->pc = 0x28B4C0u;
}
