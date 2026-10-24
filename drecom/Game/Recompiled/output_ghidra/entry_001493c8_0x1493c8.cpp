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

// Function: entry_001493c8
// Address: 0x1493c8 - 0x149440
void entry_001493c8_0x1493c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001493c8_0x1493c8");
#endif

    ctx->pc = 0x1493c8u;

    // 0x1493c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1493cc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1493ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1493d0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1493D0u;
    {
        const bool branch_taken_0x1493d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1493d0) {
            ctx->pc = 0x149440u;
            return;
        }
    }
    ctx->pc = 0x1493D8u;
    // 0x1493d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1493d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1493dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1493e0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1493e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1493e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1493e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1493e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1493ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1493ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1493f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1493f4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1493f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1493f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1493fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1493fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x149400: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149404: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x149404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x149408: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x149408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14940c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149410: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x149410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x149414: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x149414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149418: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x149418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14941c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x14941cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x149420: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x149420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x149424: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x149424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x149428: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14942c: 0xc4611b30  lwc1        $f1, 0x1B30($v1)
    ctx->pc = 0x14942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149430: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x149430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149438: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14943c: 0xe4601b30  swc1        $f0, 0x1B30($v1)
    ctx->pc = 0x14943cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6960), bits); }
    ctx->pc = 0x149440u;
}
