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

// Function: entry_001d1880
// Address: 0x1d1880 - 0x1d18f8
void entry_001d1880_0x1d1880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1880_0x1d1880");
#endif

    switch (ctx->pc) {
        case 0x1d18d0u: goto label_1d18d0;
        case 0x1d18e0u: goto label_1d18e0;
        default: break;
    }

    ctx->pc = 0x1d1880u;

    // 0x1d1880: 0xa21711ef  sb          $s7, 0x11EF($s0)
    ctx->pc = 0x1d1880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 23));
    // 0x1d1884: 0xa61611f2  sh          $s6, 0x11F2($s0)
    ctx->pc = 0x1d1884u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 22));
    // 0x1d1888: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x1d1888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d188c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1d188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d1890: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1d1890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d1894: 0xa61111f6  sh          $s1, 0x11F6($s0)
    ctx->pc = 0x1d1894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 17));
    // 0x1d1898: 0xa21411f0  sb          $s4, 0x11F0($s0)
    ctx->pc = 0x1d1898u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 20));
    // 0x1d189c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1d189cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1d18a0: 0x2483dbc0  addiu       $v1, $a0, -0x2440
    ctx->pc = 0x1d18a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
    // 0x1d18a4: 0xae031210  sw          $v1, 0x1210($s0)
    ctx->pc = 0x1d18a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 3));
    // 0x1d18a8: 0x26a30010  addiu       $v1, $s5, 0x10
    ctx->pc = 0x1d18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d18ac: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d18acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d18b0: 0x26031200  addiu       $v1, $s0, 0x1200
    ctx->pc = 0x1d18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x1d18b4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d18b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d18b8: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1d18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d18bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d18bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d18c0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1d18c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1d18c4: 0x26061200  addiu       $a2, $s0, 0x1200
    ctx->pc = 0x1d18c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x1d18c8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D18C8u;
    SET_GPR_U32(ctx, 31, 0x1D18D0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D18C8u, 0x1D18D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18D0u;
label_1d18d0:
    // 0x1d18d0: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1d18d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d18d4: 0xc7ad00c8  lwc1        $f13, 0xC8($sp)
    ctx->pc = 0x1d18d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d18d8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1D18D8u;
    SET_GPR_U32(ctx, 31, 0x1D18E0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1D18D8u, 0x1D18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18E0u;
label_1d18e0:
    // 0x1d18e0: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1d18e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1d18e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d18e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d18e8: 0xa20310a8  sb          $v1, 0x10A8($s0)
    ctx->pc = 0x1d18e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d18ec: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1d18ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d18f0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1d18f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d18f4: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x1d18f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    ctx->pc = 0x1d18f8u;
}
