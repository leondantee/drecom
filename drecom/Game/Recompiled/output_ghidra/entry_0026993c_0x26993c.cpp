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

// Function: entry_0026993c
// Address: 0x26993c - 0x2699f0
void entry_0026993c_0x26993c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026993c_0x26993c");
#endif

    ctx->pc = 0x26993cu;

    // 0x26993c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26993cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x269940: 0x2442be20  addiu       $v0, $v0, -0x41E0
    ctx->pc = 0x269940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950432));
    // 0x269944: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x269944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x269948: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x269948u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38BE20u));
    // 0x26994c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26994cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x269950: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x269950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x269954: 0x2442be30  addiu       $v0, $v0, -0x41D0
    ctx->pc = 0x269954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950448));
    // 0x269958: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x269958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26995c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x26995cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38BE30u));
    // 0x269960: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x269960u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x269964: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x269964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x269968: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x269968u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x26996c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x26996cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x269970: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x269970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x269974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269978: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x269978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26997c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x26997cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x269980: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x269980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x269984: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x269984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x269988: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x269988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26998c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x26998cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x269990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269994: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x269994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x269998: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x269998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26999c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2699a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2699a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2699a4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2699a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2699a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2699a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2699ac: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2699acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2699b0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2699b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2699b4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2699b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2699b8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2699b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2699bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2699bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2699c0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2699c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2699c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2699c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2699c8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2699c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2699cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2699ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2699d0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2699d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2699d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2699d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2699d8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2699d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2699dc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2699dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2699e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2699e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2699e4: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2699e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2699e8: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x2699e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2699ec: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2699ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2699f0u;
}
