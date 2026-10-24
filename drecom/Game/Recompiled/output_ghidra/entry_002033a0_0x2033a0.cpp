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

// Function: entry_002033a0
// Address: 0x2033a0 - 0x2034b4
void entry_002033a0_0x2033a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002033a0_0x2033a0");
#endif

    ctx->pc = 0x2033a0u;

    // 0x2033a0: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2033a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2033a4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2033a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2033a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2033a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2033ac: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x2033acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2033b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2033b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2033b4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2033b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2033b8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2033b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2033bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2033bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2033c0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2033c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2033c4: 0x8c270ab8  lw          $a3, 0xAB8($at)
    ctx->pc = 0x2033c4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2033c8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x2033c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x2033cc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2033ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2033d0: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2033d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2033d4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2033d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2033d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2033d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2033dc: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2033dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2033e0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2033e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2033e4: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x2033e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2033e8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2033e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2033ec: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2033ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2033f0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2033f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2033f4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2033f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2033f8: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2033f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2033fc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2033fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203400: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203400u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203404: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x203408: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20340c: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x20340cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203410: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x203410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x203414: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x203414u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x203418: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x203418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x20341c: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x20341cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x203420: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x203420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x203424: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x203424u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x203428: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x203428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x20342c: 0x34630014  ori         $v1, $v1, 0x14
    ctx->pc = 0x20342cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x203430: 0x333fc  dsll32      $a2, $v1, 15
    ctx->pc = 0x203430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 15));
    // 0x203434: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x203434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x203438: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20343c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x20343cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203440: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x203440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x203444: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x203444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203448: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x203448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20344c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20344cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203450: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x203450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203454: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203458: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203458u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20345c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x20345cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x203460: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x203460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x203464: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203468: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203468u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20346c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x20346cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203470: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203474: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x203474u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203478: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x203478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x20347c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20347cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203480: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203484: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x203484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x203488: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x203488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20348c: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x20348Cu;
    {
        const bool branch_taken_0x20348c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x20348c) {
            ctx->pc = 0x2034E4u;
            return;
        }
    }
    ctx->pc = 0x203494u;
    // 0x203494: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x203494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203498: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x203498u;
    {
        const bool branch_taken_0x203498 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x203498) {
            ctx->pc = 0x2034CCu;
            return;
        }
    }
    ctx->pc = 0x2034A0u;
    // 0x2034a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2034a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2034a4: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2034A4u;
    {
        const bool branch_taken_0x2034a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2034a4) {
            ctx->pc = 0x2034B4u;
            return;
        }
    }
    ctx->pc = 0x2034ACu;
    // 0x2034ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2034ACu;
    {
        const bool branch_taken_0x2034ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2034ac) {
            ctx->pc = 0x203500u;
            return;
        }
    }
    ctx->pc = 0x2034B4u;
}
