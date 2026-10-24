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

// Function: entry_0024b540
// Address: 0x24b540 - 0x24b574
void entry_0024b540_0x24b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024b540_0x24b540");
#endif

    ctx->pc = 0x24b540u;

    // 0x24b540: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x24b540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x24b544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b548: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b54c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x24b54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x24b550: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24b550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24b554: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b558: 0xa064001d  sb          $a0, 0x1D($v1)
    ctx->pc = 0x24b558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 4));
    // 0x24b55c: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x24b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b560: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x24b560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24b564: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x24b564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x24b568: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x24b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x24b56c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x24b56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24b570: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x24b570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    ctx->pc = 0x24b574u;
}
