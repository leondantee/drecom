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

// Function: entry_001ed2b8
// Address: 0x1ed2b8 - 0x1ed374
void entry_001ed2b8_0x1ed2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed2b8_0x1ed2b8");
#endif

    switch (ctx->pc) {
        case 0x1ed330u: goto label_1ed330;
        default: break;
    }

    ctx->pc = 0x1ed2b8u;

    // 0x1ed2b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ed2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed2bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1ed2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1ed2c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ed2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ed2c4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1ED2C4u;
    {
        const bool branch_taken_0x1ed2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2c4) {
            ctx->pc = 0x1ED374u;
            return;
        }
    }
    ctx->pc = 0x1ED2CCu;
    // 0x1ed2cc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ed2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed2d0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ed2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ed2d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ed2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ed2d8: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1ED2D8u;
    {
        const bool branch_taken_0x1ed2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2d8) {
            ctx->pc = 0x1ED374u;
            return;
        }
    }
    ctx->pc = 0x1ED2E0u;
    // 0x1ed2e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed2e4: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x1ed2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed2e8: 0x84c50094  lh          $a1, 0x94($a2)
    ctx->pc = 0x1ed2e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x1ed2ec: 0x14a00021  bnez        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1ED2ECu;
    {
        const bool branch_taken_0x1ed2ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2ec) {
            ctx->pc = 0x1ED374u;
            return;
        }
    }
    ctx->pc = 0x1ED2F4u;
    // 0x1ed2f4: 0x8e2413e8  lw          $a0, 0x13E8($s1)
    ctx->pc = 0x1ed2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5096)));
    // 0x1ed2f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed2fc: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1ED2FCu;
    {
        const bool branch_taken_0x1ed2fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed2fc) {
            ctx->pc = 0x1ED374u;
            return;
        }
    }
    ctx->pc = 0x1ED304u;
    // 0x1ed304: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed308: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x1ed308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed30c: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x1ed30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
    // 0x1ed310: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ed310u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed314: 0x0  nop
    ctx->pc = 0x1ed314u;
    // NOP
    // 0x1ed318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ed318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed31c: 0x0  nop
    ctx->pc = 0x1ed31cu;
    // NOP
    // 0x1ed320: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1ED320u;
    {
        const bool branch_taken_0x1ed320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed320) {
            ctx->pc = 0x1ED374u;
            return;
        }
    }
    ctx->pc = 0x1ED328u;
    // 0x1ed328: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED328u;
    SET_GPR_U32(ctx, 31, 0x1ED330u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED328u, 0x1ED330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED330u;
label_1ed330:
    // 0x1ed330: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ed330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ed334: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1ed334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ed338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed33c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1ED33Cu;
    {
        const bool branch_taken_0x1ed33c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed33c) {
            ctx->pc = 0x1ED374u;
            return;
        }
    }
    ctx->pc = 0x1ED344u;
    // 0x1ed344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ed344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed34c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1ed34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ed350: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x1ed350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1ed354: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed358: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ed358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed35c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed360: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ed360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed364: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed368: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ed368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed36c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed370: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1ed374u;
}
