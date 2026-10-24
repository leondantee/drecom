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

// Function: entry_0031120c
// Address: 0x31120c - 0x311310
void entry_0031120c_0x31120c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031120c_0x31120c");
#endif

    switch (ctx->pc) {
        case 0x3112a8u: goto label_3112a8;
        default: break;
    }

    ctx->pc = 0x31120cu;

    // 0x31120c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31120cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311210: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x311210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311214: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x311214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x311218: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x311218u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31121c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31121cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311220: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x311220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311224: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311228: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x311228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31122c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31122cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311230: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x311230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x311234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311238: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x311238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x31123c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31123cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311240: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x311240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311244: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x311244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x311248: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x311248u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31124c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31124cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311250: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x311250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311254: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311258: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x311258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31125c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31125cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311260: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x311260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x311264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311268: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x311268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x31126c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31126cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311270: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x311270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x311274: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x311274u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x311278: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31127c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31127cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311280: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311284: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x311284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x311288: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x311288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31128c: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x31128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x311290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311294: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x311294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x311298: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x311298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31129c: 0xc60e0004  lwc1        $f14, 0x4($s0)
    ctx->pc = 0x31129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3112a0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3112A0u;
    SET_GPR_U32(ctx, 31, 0x3112A8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3112A0u, 0x3112A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112A8u;
label_3112a8:
    // 0x3112a8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3112a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3112ac: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x3112acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3112b0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3112b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3112b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3112b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3112b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3112b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3112bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3112bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3112c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3112c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3112c4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3112c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3112c8: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x3112c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3112cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3112ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3112d0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x3112d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x3112d4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3112d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3112d8: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x3112d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3112dc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3112dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3112e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3112e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3112e4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3112e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3112e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3112e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3112ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3112ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3112f0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3112f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3112f4: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x3112f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3112f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3112f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3112fc: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x3112fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x311300: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x311300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x311304: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x311304u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x311308: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x311308u;
    {
        const bool branch_taken_0x311308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311308) {
            ctx->pc = 0x3113D4u;
            return;
        }
    }
    ctx->pc = 0x311310u;
}
