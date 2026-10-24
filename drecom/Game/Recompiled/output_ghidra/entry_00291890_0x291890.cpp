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

// Function: entry_00291890
// Address: 0x291890 - 0x2918ec
void entry_00291890_0x291890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291890_0x291890");
#endif

    ctx->pc = 0x291890u;

    // 0x291890: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291894: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x291894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291898: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29189c: 0xc4202a60  lwc1        $f0, 0x2A60($at)
    ctx->pc = 0x29189cu;
    { uint32_t bits = FAST_READ32(0x622A60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2918a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2918a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2918a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2918a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2918a8: 0xe4202a60  swc1        $f0, 0x2A60($at)
    ctx->pc = 0x2918a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622A60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A60u, _value); } while (0); }
    // 0x2918ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2918acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2918b0: 0x24422a80  addiu       $v0, $v0, 0x2A80
    ctx->pc = 0x2918b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10880));
    // 0x2918b4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2918b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2918b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2918b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2918bc: 0x8c222a70  lw          $v0, 0x2A70($at)
    ctx->pc = 0x2918bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A70u));
    // 0x2918c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2918c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2918c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2918c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2918c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2918c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2918cc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2918ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2918d0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2918d0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2918d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2918d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2918d8: 0x8c222a70  lw          $v0, 0x2A70($at)
    ctx->pc = 0x2918d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A70u));
    // 0x2918dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2918dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2918e0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2918e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2918e4: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x2918E4u;
    {
        const bool branch_taken_0x2918e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2918e4) {
            ctx->pc = 0x291EB8u;
            return;
        }
    }
    ctx->pc = 0x2918ECu;
}
