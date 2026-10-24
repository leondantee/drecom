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

// Function: entry_00263570
// Address: 0x263570 - 0x263638
void entry_00263570_0x263570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263570_0x263570");
#endif

    ctx->pc = 0x263570u;

    // 0x263570: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x263570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263574: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x263574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x263578: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26357c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263584: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263588: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x263588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26358c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x26358cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263590: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26359c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2635a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2635a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2635a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2635a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2635a8: 0x0  nop
    ctx->pc = 0x2635a8u;
    // NOP
    // 0x2635ac: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2635ACu;
    {
        const bool branch_taken_0x2635ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2635ac) {
            ctx->pc = 0x263638u;
            return;
        }
    }
    ctx->pc = 0x2635B4u;
    // 0x2635b4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2635b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2635b8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2635b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2635bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2635bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2635c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2635c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2635c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2635c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2635c8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2635c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2635cc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2635ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2635d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2635d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2635d4: 0x0  nop
    ctx->pc = 0x2635d4u;
    // NOP
    // 0x2635d8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2635d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2635dc: 0x0  nop
    ctx->pc = 0x2635dcu;
    // NOP
    // 0x2635e0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2635E0u;
    {
        const bool branch_taken_0x2635e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2635e0) {
            ctx->pc = 0x263638u;
            return;
        }
    }
    ctx->pc = 0x2635E8u;
    // 0x2635e8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x2635e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2635ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2635ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2635f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2635f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2635f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2635f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2635f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2635f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2635fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2635fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x263600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263604: 0x0  nop
    ctx->pc = 0x263604u;
    // NOP
    // 0x263608: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x263608u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26360c: 0x0  nop
    ctx->pc = 0x26360cu;
    // NOP
    // 0x263610: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x263610u;
    {
        const bool branch_taken_0x263610 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263610) {
            ctx->pc = 0x263638u;
            return;
        }
    }
    ctx->pc = 0x263618u;
    // 0x263618: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x263618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x26361c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x26361cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263624: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263628: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26362c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263630: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x263630u;
    {
        const bool branch_taken_0x263630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263630) {
            ctx->pc = 0x2638E0u;
            return;
        }
    }
    ctx->pc = 0x263638u;
}
