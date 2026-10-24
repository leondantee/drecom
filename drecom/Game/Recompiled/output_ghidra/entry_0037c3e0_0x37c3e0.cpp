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

// Function: entry_0037c3e0
// Address: 0x37c3e0 - 0x37c438
void entry_0037c3e0_0x37c3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037c3e0_0x37c3e0");
#endif

    ctx->pc = 0x37c3e0u;

    // 0x37c3e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c3e4: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x37c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c3e8: 0x3c033ff3  lui         $v1, 0x3FF3
    ctx->pc = 0x37c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16371 << 16));
    // 0x37c3ec: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x37c3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x37c3f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c3f4: 0x0  nop
    ctx->pc = 0x37c3f4u;
    // NOP
    // 0x37c3f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37c3f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37c3fc: 0x0  nop
    ctx->pc = 0x37c3fcu;
    // NOP
    // 0x37c400: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x37C400u;
    {
        const bool branch_taken_0x37c400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37c400) {
            ctx->pc = 0x37C440u;
            return;
        }
    }
    ctx->pc = 0x37C408u;
    // 0x37c408: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c40c: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x37c40cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x37c410: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x37c410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37c414: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x37c414u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x37c418: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x37C418u;
    {
        const bool branch_taken_0x37c418 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c418) {
            ctx->pc = 0x37C438u;
            return;
        }
    }
    ctx->pc = 0x37C420u;
    // 0x37c420: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c424: 0x908311ec  lbu         $v1, 0x11EC($a0)
    ctx->pc = 0x37c424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4588)));
    // 0x37c428: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x37c428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x37c42c: 0xa08311ec  sb          $v1, 0x11EC($a0)
    ctx->pc = 0x37c42cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4588), (uint8_t)GPR_U32(ctx, 3));
    // 0x37c430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37C430u;
    {
        const bool branch_taken_0x37c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c430) {
            ctx->pc = 0x37C440u;
            return;
        }
    }
    ctx->pc = 0x37C438u;
}
