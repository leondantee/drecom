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

// Function: entry_00331f24
// Address: 0x331f24 - 0x331f50
void entry_00331f24_0x331f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331f24_0x331f24");
#endif

    ctx->pc = 0x331f24u;

    // 0x331f24: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x331f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x331f28: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x331f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x331f2c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x331f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x331f30: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x331f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x331f34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x331f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x331f38: 0xc4c00120  lwc1        $f0, 0x120($a2)
    ctx->pc = 0x331f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x331f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x331f40: 0xe4c00120  swc1        $f0, 0x120($a2)
    ctx->pc = 0x331f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 288), bits); }
    // 0x331f44: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x331f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x331f48: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x331f48u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331f4c: 0x0  nop
    ctx->pc = 0x331f4cu;
    // NOP
    ctx->pc = 0x331f50u;
}
