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

// Function: entry_0015bb90
// Address: 0x15bb90 - 0x15bbf4
void entry_0015bb90_0x15bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bb90_0x15bb90");
#endif

    ctx->pc = 0x15bb90u;

    // 0x15bb90: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x15bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bb94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15bb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bb98: 0x0  nop
    ctx->pc = 0x15bb98u;
    // NOP
    // 0x15bb9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15bb9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bba0: 0x0  nop
    ctx->pc = 0x15bba0u;
    // NOP
    // 0x15bba4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x15BBA4u;
    {
        const bool branch_taken_0x15bba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bba4) {
            ctx->pc = 0x15BC08u;
            return;
        }
    }
    ctx->pc = 0x15BBACu;
    // 0x15bbac: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x15bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bbb0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x15bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x15bbb4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x15bbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x15bbb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bbbc: 0x0  nop
    ctx->pc = 0x15bbbcu;
    // NOP
    // 0x15bbc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15bbc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bbc4: 0x0  nop
    ctx->pc = 0x15bbc4u;
    // NOP
    // 0x15bbc8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x15BBC8u;
    {
        const bool branch_taken_0x15bbc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bbc8) {
            ctx->pc = 0x15BBF4u;
            return;
        }
    }
    ctx->pc = 0x15BBD0u;
    // 0x15bbd0: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x15bbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bbd4: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x15bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x15bbd8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x15bbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x15bbdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bbdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bbe0: 0x0  nop
    ctx->pc = 0x15bbe0u;
    // NOP
    // 0x15bbe4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15bbe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15bbe8: 0xe6001564  swc1        $f0, 0x1564($s0)
    ctx->pc = 0x15bbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5476), bits); }
    // 0x15bbec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x15BBECu;
    {
        const bool branch_taken_0x15bbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bbec) {
            ctx->pc = 0x15BC5Cu;
            return;
        }
    }
    ctx->pc = 0x15BBF4u;
}
