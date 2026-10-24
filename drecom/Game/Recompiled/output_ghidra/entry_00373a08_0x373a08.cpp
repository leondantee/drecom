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

// Function: entry_00373a08
// Address: 0x373a08 - 0x373a58
void entry_00373a08_0x373a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373a08_0x373a08");
#endif

    ctx->pc = 0x373a08u;

    // 0x373a08: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x373a08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373a0c: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x373a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x373a10: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x373a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x373a14: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x373a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x373a18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x373a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373a1c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x373a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373a20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373a24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x373a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x373a28: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x373a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373a2c: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x373a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x373a30: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x373a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x373a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373a38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x373a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373a3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373a40: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373a44: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373a4c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x373a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373a50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x373a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x373a54: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    ctx->pc = 0x373a58u;
}
