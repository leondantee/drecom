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

// Function: entry_002f38ac
// Address: 0x2f38ac - 0x2f3980
void entry_002f38ac_0x2f38ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f38ac_0x2f38ac");
#endif

    switch (ctx->pc) {
        case 0x2f3918u: goto label_2f3918;
        default: break;
    }

    ctx->pc = 0x2f38acu;

    // 0x2f38ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f38acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f38b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f38b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f38b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f38b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f38bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f38c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f38c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f38c4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f38c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f38c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f38c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f38cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f38d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f38d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f38d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f38d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f38dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f38dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f38e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f38e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f38e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f38e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f38ec: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f38ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f38f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f38f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f38f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f38f8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f38f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f38fc: 0x0  nop
    ctx->pc = 0x2f38fcu;
    // NOP
    // 0x2f3900: 0x0  nop
    ctx->pc = 0x2f3900u;
    // NOP
    // 0x2f3904: 0x1010  mfhi        $v0
    ctx->pc = 0x2f3904u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f3908: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F3908u;
    {
        const bool branch_taken_0x2f3908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3908) {
            ctx->pc = 0x2F3980u;
            return;
        }
    }
    ctx->pc = 0x2F3910u;
    // 0x2f3910: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3910u;
    SET_GPR_U32(ctx, 31, 0x2F3918u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3910u, 0x2F3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3918u;
label_2f3918:
    // 0x2f3918: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2f3918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2f391c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f391cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3920: 0x0  nop
    ctx->pc = 0x2f3920u;
    // NOP
    // 0x2f3924: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3928: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f3928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f392c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f392cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3930: 0x0  nop
    ctx->pc = 0x2f3930u;
    // NOP
    // 0x2f3934: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f3934u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3938: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f393c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f393cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3944: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3948: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f394c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f394cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3950: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3954: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f3954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3958: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f3958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f395c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f395cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3960: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3964: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f3964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3968: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2f3968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f396c: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f396cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3970: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f3970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3974: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f3974u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3978: 0xc0bbf2c  jal         func_2EFCB0
    ctx->pc = 0x2F3978u;
    SET_GPR_U32(ctx, 31, 0x2F3980u);
    ctx->pc = 0x2EFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFCB0u, 0x2F3978u, 0x2F3980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3980u;
}
