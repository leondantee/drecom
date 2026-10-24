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

// Function: entry_002028c8
// Address: 0x2028c8 - 0x2029dc
void entry_002028c8_0x2028c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002028c8_0x2028c8");
#endif

    ctx->pc = 0x2028c8u;

    // 0x2028c8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2028c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2028cc: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2028ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2028d0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2028d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2028d4: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x2028d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2028d8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2028d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2028dc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2028dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2028e0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2028e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2028e4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2028e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2028e8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2028e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2028ec: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2028ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2028f0: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2028f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2028f4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2028f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2028f8: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x2028f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2028fc: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2028fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x202900: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x202900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x202904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202908: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x202908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20290c: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x20290cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x202910: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x202910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x202914: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x202914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202918: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20291c: 0x8c270ab8  lw          $a3, 0xAB8($at)
    ctx->pc = 0x20291cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202920: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x202920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x202924: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202928: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202928u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20292c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x20292cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x202930: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202934: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202934u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202938: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x202938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x20293c: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x20293cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x202940: 0x38c30001  xori        $v1, $a2, 0x1
    ctx->pc = 0x202940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x202944: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x202944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x202948: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20294c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20294cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202950: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x202950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x202954: 0x34660014  ori         $a2, $v1, 0x14
    ctx->pc = 0x202954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x202958: 0x643fc  dsll32      $t0, $a2, 15
    ctx->pc = 0x202958u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 15));
    // 0x20295c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x20295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x202960: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202964: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x202964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x202968: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x202968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x20296c: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x20296cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x202970: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x202970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x202974: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202978: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x202978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x20297c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20297cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202980: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202984: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202984u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202988: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x202988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20298c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20298cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202990: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202994: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202994u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202998: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20299c: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x20299cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2029a0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2029a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2029a4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2029a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2029a8: 0xac260ab8  sw          $a2, 0xAB8($at)
    ctx->pc = 0x2029a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x2029ac: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x2029acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2029b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2029b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2029b4: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2029B4u;
    {
        const bool branch_taken_0x2029b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2029b4) {
            ctx->pc = 0x202A0Cu;
            return;
        }
    }
    ctx->pc = 0x2029BCu;
    // 0x2029bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2029bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2029c0: 0x10c7000c  beq         $a2, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2029C0u;
    {
        const bool branch_taken_0x2029c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x2029c0) {
            ctx->pc = 0x2029F4u;
            return;
        }
    }
    ctx->pc = 0x2029C8u;
    // 0x2029c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2029c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2029cc: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2029CCu;
    {
        const bool branch_taken_0x2029cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2029cc) {
            ctx->pc = 0x2029DCu;
            return;
        }
    }
    ctx->pc = 0x2029D4u;
    // 0x2029d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2029D4u;
    {
        const bool branch_taken_0x2029d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2029d4) {
            ctx->pc = 0x202A28u;
            return;
        }
    }
    ctx->pc = 0x2029DCu;
}
