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

// Function: entry_001020bc
// Address: 0x1020bc - 0x102158
void entry_001020bc_0x1020bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001020bc_0x1020bc");
#endif

    ctx->pc = 0x1020bcu;

    // 0x1020bc: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x1020bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1020c0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1020c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1020c4: 0x95260006  lhu         $a2, 0x6($t1)
    ctx->pc = 0x1020c4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x1020c8: 0x3484e000  ori         $a0, $a0, 0xE000
    ctx->pc = 0x1020c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x1020cc: 0x9525000a  lhu         $a1, 0xA($t1)
    ctx->pc = 0x1020ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x1020d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1020d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1020d4: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x1020d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1020d8: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x1020d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1020dc: 0x95270008  lhu         $a3, 0x8($t1)
    ctx->pc = 0x1020dcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1020e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1020e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1020e4: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x1020e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x1020e8: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x1020e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x1020ec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1020ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1020f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1020f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1020f4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1020f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1020f8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1020f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1020fc: 0x3442e030  ori         $v0, $v0, 0xE030
    ctx->pc = 0x1020fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57392);
    // 0x102100: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x102100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x102104: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x102104u;
    runtime->Store32(rdram, ctx, 0x1000E030u, GPR_U32(ctx, 5));
    // 0x102108: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x102108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10210c: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x10210cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
    // 0x102110: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x102110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x102114: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x102114u;
    runtime->Store32(rdram, ctx, 0x1000E050u, GPR_U32(ctx, 6));
    // 0x102118: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x102118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
    // 0x10211c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x10211cu;
    runtime->Store32(rdram, ctx, 0x1000E040u, GPR_U32(ctx, 8));
    // 0x102120: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x102120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x102124: 0x246639e8  addiu       $a2, $v1, 0x39E8
    ctx->pc = 0x102124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 14824));
    // 0x102128: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x102128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10212c: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x10212cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x102130: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x102130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x102134: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x102134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x102138: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x102138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x10213c: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x10213cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102140: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x102140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102144: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x102144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102148: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x102148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10214c: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x10214cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3839F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3839F8u, _value); } while (0);
    // 0x102150: 0x3e00008  jr          $ra
    ctx->pc = 0x102150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102150u;
        // 0x102154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102158u;
}
