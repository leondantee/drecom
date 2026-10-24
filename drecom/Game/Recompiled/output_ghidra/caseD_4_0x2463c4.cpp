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

// Function: caseD_4
// Address: 0x2463c4 - 0x246434
void caseD_4_0x2463c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2463c4");
#endif

    ctx->pc = 0x2463c4u;

    // 0x2463c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2463c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2463c8: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2463c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2463cc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2463CCu;
    {
        const bool branch_taken_0x2463cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463cc) {
            ctx->pc = 0x246434u;
            return;
        }
    }
    ctx->pc = 0x2463D4u;
    // 0x2463d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2463d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2463d8: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2463d8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2463dc: 0x3c05420c  lui         $a1, 0x420C
    ctx->pc = 0x2463dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16908 << 16));
    // 0x2463e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2463e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2463e4: 0x0  nop
    ctx->pc = 0x2463e4u;
    // NOP
    // 0x2463e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2463e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2463ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2463ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2463f0: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2463f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2463f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2463f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2463f8: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2463f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x2463fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2463fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x246400: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x246400u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x246404: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x246404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x246408: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24640c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246410: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x246410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246414: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x246414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x246418: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x246418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x24641c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24641cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246420: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x246420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246424: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x246424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x246428: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x246428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x24642c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24642Cu;
    {
        const bool branch_taken_0x24642c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24642c) {
            ctx->pc = 0x246458u;
            return;
        }
    }
    ctx->pc = 0x246434u;
}
