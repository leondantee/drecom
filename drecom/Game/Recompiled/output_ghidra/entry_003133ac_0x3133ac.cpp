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

// Function: entry_003133ac
// Address: 0x3133ac - 0x3134b0
void entry_003133ac_0x3133ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003133ac_0x3133ac");
#endif

    switch (ctx->pc) {
        case 0x3133d8u: goto label_3133d8;
        default: break;
    }

    ctx->pc = 0x3133acu;

    // 0x3133ac: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3133acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3133b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3133b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3133b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3133b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3133b8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3133b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3133bc: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x3133bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3133c0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x3133c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3133c4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3133c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3133c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3133c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3133cc: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x3133ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3133d0: 0xc0c4988  jal         func_312620
    ctx->pc = 0x3133D0u;
    SET_GPR_U32(ctx, 31, 0x3133D8u);
    ctx->pc = 0x312620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312620u, 0x3133D0u, 0x3133D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133D8u;
label_3133d8:
    // 0x3133d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3133d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3133dc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3133dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3133e0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3133e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3133e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3133e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3133e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3133e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3133ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3133ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3133f0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x3133f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3133f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3133f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3133f8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3133f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3133fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3133fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x313400: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x313400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x313404: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x313404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x313408: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x313408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x31340c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x31340cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x313410: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x313410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x313414: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313418: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x313418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x31341c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31341cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x313420: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x313420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313424: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x313424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x313428: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x313428u;
    {
        const bool branch_taken_0x313428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x313428) {
            ctx->pc = 0x3134B8u;
            return;
        }
    }
    ctx->pc = 0x313430u;
    // 0x313430: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313434: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313434u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313438: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31343c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31343cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313444: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313448: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x313448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31344c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31344cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313450: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313450u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313454: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313458: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31345c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31345cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313460: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x313464: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x313464u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313468: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31346c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31346cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313470: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x313470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x313474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313478: 0x30500019  andi        $s0, $v0, 0x19
    ctx->pc = 0x313478u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)25);
    // 0x31347c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x31347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x313480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313484: 0x0  nop
    ctx->pc = 0x313484u;
    // NOP
    // 0x313488: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x313488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x31348c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x31348cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x313490: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x313490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x313494: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x313494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313498: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x313498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31349c: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x31349cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3134a0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x3134a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3134a4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3134a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3134a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3134a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3134ac: 0x2409000b  addiu       $t1, $zero, 0xB
    ctx->pc = 0x3134acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x3134b0u;
}
