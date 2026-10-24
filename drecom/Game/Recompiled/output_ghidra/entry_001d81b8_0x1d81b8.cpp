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

// Function: entry_001d81b8
// Address: 0x1d81b8 - 0x1d8250
void entry_001d81b8_0x1d81b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d81b8_0x1d81b8");
#endif

    ctx->pc = 0x1d81b8u;

    // 0x1d81b8: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1d81b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d81bc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d81bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d81c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d81c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d81c4: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D81C4u;
    {
        const bool branch_taken_0x1d81c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d81c4) {
            ctx->pc = 0x1D8250u;
            return;
        }
    }
    ctx->pc = 0x1D81CCu;
    // 0x1d81cc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d81d0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1d81d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d81d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d81d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d81d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d81d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d81dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d81dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d81e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d81e4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1d81e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d81e8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d81e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d81ec: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d81ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d81f0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1d81f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d81f4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d81f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d81f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d81f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d81fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d81fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8200: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8204: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8208: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d8208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d820c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8210: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1d8210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d8214: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8218: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d821c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8224: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8228: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d822c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8230: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1d8230u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d8234: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8238: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d823c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8240: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8244: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8248: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d8248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d824c: 0x0  nop
    ctx->pc = 0x1d824cu;
    // NOP
    ctx->pc = 0x1d8250u;
}
