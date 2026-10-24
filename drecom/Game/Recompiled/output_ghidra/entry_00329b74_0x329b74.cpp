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

// Function: entry_00329b74
// Address: 0x329b74 - 0x329bcc
void entry_00329b74_0x329b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329b74_0x329b74");
#endif

    ctx->pc = 0x329b74u;

    // 0x329b74: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x329b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329b78: 0x8643138c  lh          $v1, 0x138C($s2)
    ctx->pc = 0x329b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x329b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329b80: 0x0  nop
    ctx->pc = 0x329b80u;
    // NOP
    // 0x329b84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329b88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x329b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329b8c: 0x0  nop
    ctx->pc = 0x329b8cu;
    // NOP
    // 0x329b90: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x329B90u;
    {
        const bool branch_taken_0x329b90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x329b90) {
            ctx->pc = 0x329BCCu;
            return;
        }
    }
    ctx->pc = 0x329B98u;
    // 0x329b98: 0x9203290f  lbu         $v1, 0x290F($s0)
    ctx->pc = 0x329b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10511)));
    // 0x329b9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329ba4: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x329BA4u;
    {
        const bool branch_taken_0x329ba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329ba4) {
            ctx->pc = 0x329BCCu;
            return;
        }
    }
    ctx->pc = 0x329BACu;
    // 0x329bac: 0x9203290e  lbu         $v1, 0x290E($s0)
    ctx->pc = 0x329bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10510)));
    // 0x329bb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329bb4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x329BB4u;
    {
        const bool branch_taken_0x329bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329bb4) {
            ctx->pc = 0x329BCCu;
            return;
        }
    }
    ctx->pc = 0x329BBCu;
    // 0x329bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329bc0: 0xa203290e  sb          $v1, 0x290E($s0)
    ctx->pc = 0x329bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10510), (uint8_t)GPR_U32(ctx, 3));
    // 0x329bc4: 0xa6002910  sh          $zero, 0x2910($s0)
    ctx->pc = 0x329bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10512), (uint16_t)GPR_U32(ctx, 0));
    // 0x329bc8: 0xa200290f  sb          $zero, 0x290F($s0)
    ctx->pc = 0x329bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10511), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x329bccu;
}
