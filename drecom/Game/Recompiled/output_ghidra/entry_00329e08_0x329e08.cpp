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

// Function: entry_00329e08
// Address: 0x329e08 - 0x329e54
void entry_00329e08_0x329e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329e08_0x329e08");
#endif

    switch (ctx->pc) {
        case 0x329e20u: goto label_329e20;
        default: break;
    }

    ctx->pc = 0x329e08u;

    // 0x329e08: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x329e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x329e0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x329e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x329e10: 0x24441020  addiu       $a0, $v0, 0x1020
    ctx->pc = 0x329e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4128));
    // 0x329e14: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x329e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x329e18: 0xc040c9e  jal         func_103278
    ctx->pc = 0x329E18u;
    SET_GPR_U32(ctx, 31, 0x329E20u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x329E20u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x329E20u) { return; }
    ctx->pc = 0x329E20u;
label_329e20:
    // 0x329e20: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329e24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329e28: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x329E28u;
    {
        const bool branch_taken_0x329e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329e28) {
            ctx->pc = 0x329E54u;
            return;
        }
    }
    ctx->pc = 0x329E30u;
    // 0x329e30: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329e30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329e34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329e38: 0x0  nop
    ctx->pc = 0x329e38u;
    // NOP
    // 0x329e3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329e40: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x329e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x329e44: 0xc6002824  lwc1        $f0, 0x2824($s0)
    ctx->pc = 0x329e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329e48: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x329e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x329e4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x329E4Cu;
    {
        const bool branch_taken_0x329e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e4c) {
            ctx->pc = 0x329E98u;
            return;
        }
    }
    ctx->pc = 0x329E54u;
}
