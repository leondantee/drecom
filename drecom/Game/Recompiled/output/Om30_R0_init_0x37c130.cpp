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

// Function: Om30_R0_init
// Address: 0x37c130 - 0x37c1f4
void Om30_R0_init_0x37c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om30_R0_init_0x37c130");
#endif

    ctx->pc = 0x37c130u;

    // 0x37c130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37c134: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x37c134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x37c138: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x37c138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c13c: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x37c13cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37c140: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x37c140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x37c144: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x37c144u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c148: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37c148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x37c14c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c150: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c154: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x37c154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x37c158: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c15c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x37c15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x37c160: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c164: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x37c164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x37c168: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x37c168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c16c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x37c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37c170: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x37c170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x37c174: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x37c174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x37c178: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x37c178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x37c17c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x37c17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x37c180: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c184: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c188: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x37c188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
    // 0x37c18c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37c18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37c190: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x37c190u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c194: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c198: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x37c198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x37c19c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37c19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37c1a0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x37c1a0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c1a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c1a8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x37c1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x37c1ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37c1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37c1b0: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x37c1b0u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c1b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c1b8: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x37c1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x37c1bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c1c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c1c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x37c1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x37c1c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c1cc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x37c1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c1d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c1d4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x37c1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c1d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c1dc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x37c1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c1e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x37c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c1e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x37c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x37c1e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37c1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37c1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x37C1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C1F4u;
}
