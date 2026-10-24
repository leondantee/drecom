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

// Function: entry_00345258
// Address: 0x345258 - 0x345280
void entry_00345258_0x345258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345258_0x345258");
#endif

    ctx->pc = 0x345258u;

    // 0x345258: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34525c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345260: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x345260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x345264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345268: 0x0  nop
    ctx->pc = 0x345268u;
    // NOP
    // 0x34526c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34526cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345274: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x345274u;
    {
        const bool branch_taken_0x345274 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x345274) {
            ctx->pc = 0x345280u;
            return;
        }
    }
    ctx->pc = 0x34527Cu;
    // 0x34527c: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x34527cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x345280u;
}
