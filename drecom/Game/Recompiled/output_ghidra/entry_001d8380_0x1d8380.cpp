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

// Function: entry_001d8380
// Address: 0x1d8380 - 0x1d8418
void entry_001d8380_0x1d8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8380_0x1d8380");
#endif

    ctx->pc = 0x1d8380u;

    // 0x1d8380: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1d8380u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d8384: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8388: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d8388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d838c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D838Cu;
    {
        const bool branch_taken_0x1d838c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d838c) {
            ctx->pc = 0x1D8418u;
            return;
        }
    }
    ctx->pc = 0x1D8394u;
    // 0x1d8394: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8398: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1d8398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d839c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d839cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d83a0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d83a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d83a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d83a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d83ac: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1d83acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d83b0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d83b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d83b4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d83b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d83b8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1d83b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d83bc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d83bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d83c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d83c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d83c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d83c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d83cc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d83ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d83d0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d83d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d83d4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d83d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d83d8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1d83d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d83dc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d83dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d83e0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d83e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d83e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d83e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d83e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d83ec: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d83f0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d83f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d83f4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d83f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d83f8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1d83f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d83fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d83fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8400: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d8404: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8408: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d840c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d840cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8410: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d8410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d8414: 0x0  nop
    ctx->pc = 0x1d8414u;
    // NOP
    ctx->pc = 0x1d8418u;
}
