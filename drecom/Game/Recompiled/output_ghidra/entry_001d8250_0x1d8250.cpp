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

// Function: entry_001d8250
// Address: 0x1d8250 - 0x1d82e8
void entry_001d8250_0x1d8250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8250_0x1d8250");
#endif

    ctx->pc = 0x1d8250u;

    // 0x1d8250: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x1d8250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1d8254: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8258: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d8258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d825c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D825Cu;
    {
        const bool branch_taken_0x1d825c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d825c) {
            ctx->pc = 0x1D82E8u;
            return;
        }
    }
    ctx->pc = 0x1D8264u;
    // 0x1d8264: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8268: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x1d8268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1d826c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d826cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8270: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d8274: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d827c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1d827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d8280: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d8284: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d8284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8288: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x1d8288u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1d828c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d828cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8290: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d8294: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8298: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d829c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d829cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d82a0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d82a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d82a4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d82a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d82a8: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x1d82a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1d82ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d82acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d82b0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d82b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d82b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d82b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d82bc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d82c0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d82c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d82c4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d82c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d82c8: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x1d82c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1d82cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d82ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d82d0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d82d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d82d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d82dc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d82e0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d82e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d82e4: 0x0  nop
    ctx->pc = 0x1d82e4u;
    // NOP
    ctx->pc = 0x1d82e8u;
}
