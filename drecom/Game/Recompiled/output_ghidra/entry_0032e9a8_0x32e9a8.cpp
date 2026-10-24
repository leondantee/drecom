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

// Function: entry_0032e9a8
// Address: 0x32e9a8 - 0x32ea50
void entry_0032e9a8_0x32e9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e9a8_0x32e9a8");
#endif

    ctx->pc = 0x32e9a8u;

    // 0x32e9a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32e9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32e9ac: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x32e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x32e9b0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x32e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x32e9b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32e9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32e9b8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x32E9B8u;
    {
        const bool branch_taken_0x32e9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e9b8) {
            ctx->pc = 0x32EA68u;
            return;
        }
    }
    ctx->pc = 0x32E9C0u;
    // 0x32e9c0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e9c4: 0x8c23ec18  lw          $v1, -0x13E8($at)
    ctx->pc = 0x32e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32e9c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32e9cc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e9d0: 0xac23ec18  sw          $v1, -0x13E8($at)
    ctx->pc = 0x32e9d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x88EC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88EC18u, _value); } while (0);
    // 0x32e9d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e9d8: 0x8c25ec18  lw          $a1, -0x13E8($at)
    ctx->pc = 0x32e9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32e9dc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e9e0: 0x8c24ec10  lw          $a0, -0x13F0($at)
    ctx->pc = 0x32e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32e9e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x32e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x32e9e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32e9ec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x32e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32e9f0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32e9f4: 0x2463a640  addiu       $v1, $v1, -0x59C0
    ctx->pc = 0x32e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944320));
    // 0x32e9f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32e9fc: 0x80630008  lb          $v1, 0x8($v1)
    ctx->pc = 0x32e9fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32ea00: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32ea00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32ea04: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32ea04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32ea08: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x32ea08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32ea0c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x32EA0Cu;
    {
        const bool branch_taken_0x32ea0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea0c) {
            ctx->pc = 0x32EA50u;
            return;
        }
    }
    ctx->pc = 0x32EA14u;
    // 0x32ea14: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ea14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ea18: 0x8c24ec10  lw          $a0, -0x13F0($at)
    ctx->pc = 0x32ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32ea1c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x32ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x32ea20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32ea24: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x32ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32ea28: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32ea2c: 0x2463a640  addiu       $v1, $v1, -0x59C0
    ctx->pc = 0x32ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944320));
    // 0x32ea30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32ea34: 0x80630008  lb          $v1, 0x8($v1)
    ctx->pc = 0x32ea34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32ea38: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32ea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32ea3c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32ea3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32ea40: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ea40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ea44: 0xac23ec18  sw          $v1, -0x13E8($at)
    ctx->pc = 0x32ea44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x88EC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88EC18u, _value); } while (0);
    // 0x32ea48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32EA48u;
    {
        const bool branch_taken_0x32ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea48) {
            ctx->pc = 0x32EA68u;
            return;
        }
    }
    ctx->pc = 0x32EA50u;
}
