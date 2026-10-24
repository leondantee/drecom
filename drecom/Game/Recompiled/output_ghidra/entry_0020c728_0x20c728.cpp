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

// Function: entry_0020c728
// Address: 0x20c728 - 0x20c76c
void entry_0020c728_0x20c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c728_0x20c728");
#endif

    ctx->pc = 0x20c728u;

    // 0x20c728: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x20c728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x20c72c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x20c72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x20c730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c734: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c738: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x20c738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x20c73c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c744: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20c744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c748: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x20c748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20c74c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c750: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20c750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c754: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c758: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20c758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c75c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c760: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20c760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c764: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c768: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20c768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20c76cu;
}
