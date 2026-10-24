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

// Function: entry_0017b604
// Address: 0x17b604 - 0x17b650
void entry_0017b604_0x17b604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b604_0x17b604");
#endif

    ctx->pc = 0x17b604u;

    // 0x17b604: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17b604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b608: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17b608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17b60c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b614: 0x0  nop
    ctx->pc = 0x17b614u;
    // NOP
    // 0x17b618: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17b618u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17b61c: 0x0  nop
    ctx->pc = 0x17b61cu;
    // NOP
    // 0x17b620: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b624: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x17b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x17b628: 0x12020097  beq         $s0, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x17B628u;
    {
        const bool branch_taken_0x17b628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b628) {
            ctx->pc = 0x17B888u;
            return;
        }
    }
    ctx->pc = 0x17B630u;
    // 0x17b630: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b634: 0xc421ef10  lwc1        $f1, -0x10F0($at)
    ctx->pc = 0x17b634u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b638: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x17b638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b63c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b63cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17b640: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b644: 0xe420ef10  swc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF10u, _value); } while (0); }
    // 0x17b648: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x17B648u;
    {
        const bool branch_taken_0x17b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b648) {
            ctx->pc = 0x17B888u;
            return;
        }
    }
    ctx->pc = 0x17B650u;
}
