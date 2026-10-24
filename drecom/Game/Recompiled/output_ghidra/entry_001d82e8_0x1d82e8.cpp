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

// Function: entry_001d82e8
// Address: 0x1d82e8 - 0x1d8380
void entry_001d82e8_0x1d82e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d82e8_0x1d82e8");
#endif

    ctx->pc = 0x1d82e8u;

    // 0x1d82e8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d82e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d82ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d82ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d82f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d82f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d82f4: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D82F4u;
    {
        const bool branch_taken_0x1d82f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d82f4) {
            ctx->pc = 0x1D8380u;
            return;
        }
    }
    ctx->pc = 0x1D82FCu;
    // 0x1d82fc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d82fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8300: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d8300u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8304: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8308: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d830c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8310: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8314: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1d8314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d8318: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d831c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8320: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d8320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8324: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8328: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d832c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8334: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8338: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d8338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d833c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8340: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d8340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8344: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8348: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d834c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8350: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8354: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8358: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d835c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8360: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d8360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8364: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d8364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8368: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d8368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d836c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8374: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d8374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d8378: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d8378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d837c: 0x0  nop
    ctx->pc = 0x1d837cu;
    // NOP
    ctx->pc = 0x1d8380u;
}
