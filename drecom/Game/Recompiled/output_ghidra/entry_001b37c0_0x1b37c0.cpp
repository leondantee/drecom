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

// Function: entry_001b37c0
// Address: 0x1b37c0 - 0x1b382c
void entry_001b37c0_0x1b37c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b37c0_0x1b37c0");
#endif

    ctx->pc = 0x1b37c0u;

    // 0x1b37c0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1b37c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b37c4: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b37c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b37c8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b37cc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b37ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b37d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b37d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b37d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b37d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b37dc: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x1b37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x1b37e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b37e4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b37e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b37e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b37ec: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b37ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b37f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b37f4: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b37f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b37f8: 0xa60011f4  sh          $zero, 0x11F4($s0)
    ctx->pc = 0x1b37f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b37fc: 0xa60011f2  sh          $zero, 0x11F2($s0)
    ctx->pc = 0x1b37fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b3800: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b3800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b3804: 0x94420018  lhu         $v0, 0x18($v0)
    ctx->pc = 0x1b3804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b3808: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b3808u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b380c: 0xa20011f0  sb          $zero, 0x11F0($s0)
    ctx->pc = 0x1b380cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3810: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b3810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3814: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b3814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b3818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b381c: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x1b381cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3824: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1B3824u;
    {
        const bool branch_taken_0x1b3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3824) {
            ctx->pc = 0x1B38CCu;
            return;
        }
    }
    ctx->pc = 0x1B382Cu;
}
