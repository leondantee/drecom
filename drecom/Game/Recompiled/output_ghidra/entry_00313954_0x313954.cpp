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

// Function: entry_00313954
// Address: 0x313954 - 0x3139d4
void entry_00313954_0x313954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313954_0x313954");
#endif

    ctx->pc = 0x313954u;

    // 0x313954: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x313954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x313958: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x313958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x31395c: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x31395Cu;
    {
        const bool branch_taken_0x31395c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31395c) {
            ctx->pc = 0x3139D4u;
            return;
        }
    }
    ctx->pc = 0x313964u;
    // 0x313964: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x313964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x313968: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x313968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x31396c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x31396cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x313970: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x313970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x313974: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x313974u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x313978: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x313978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31397c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x31397cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x313980: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x313980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313984: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x313984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x313988: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x313988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31398c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x31398cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x313990: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x313990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x313994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313998: 0x0  nop
    ctx->pc = 0x313998u;
    // NOP
    // 0x31399c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x31399cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x3139a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3139a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3139a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3139a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3139a8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x3139a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x3139ac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3139acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3139b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3139b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3139b4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x3139b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x3139b8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3139b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3139bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3139bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3139c0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x3139c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x3139c4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x3139c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3139c8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3139c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3139cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3139ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3139d0: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x3139d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    ctx->pc = 0x3139d4u;
}
