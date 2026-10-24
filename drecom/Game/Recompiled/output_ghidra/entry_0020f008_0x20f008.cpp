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

// Function: entry_0020f008
// Address: 0x20f008 - 0x20f0a8
void entry_0020f008_0x20f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f008_0x20f008");
#endif

    switch (ctx->pc) {
        case 0x20f020u: goto label_20f020;
        case 0x20f068u: goto label_20f068;
        default: break;
    }

    ctx->pc = 0x20f008u;

    // 0x20f008: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x20f008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x20f00c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20f00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f010: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f014: 0xc48d0184  lwc1        $f13, 0x184($a0)
    ctx->pc = 0x20f014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20f018: 0xc0455e6  jal         func_115798
    ctx->pc = 0x20F018u;
    SET_GPR_U32(ctx, 31, 0x20F020u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x20F018u, 0x20F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F020u;
label_20f020:
    // 0x20f020: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x20f020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x20f024: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20f024u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f028: 0x0  nop
    ctx->pc = 0x20f028u;
    // NOP
    // 0x20f02c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20f02cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x20f030: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f034: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x20f034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x20f038: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x20f038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20f03c: 0x3c063e4c  lui         $a2, 0x3E4C
    ctx->pc = 0x20f03cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15948 << 16));
    // 0x20f040: 0x34c5cccd  ori         $a1, $a2, 0xCCCD
    ctx->pc = 0x20f040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x20f044: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x20f044u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20f048: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f04c: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x20f04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x20f050: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20f050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f054: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x20f054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x20f058: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x20f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20f05c: 0xc46d011c  lwc1        $f13, 0x11C($v1)
    ctx->pc = 0x20f05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20f060: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20F060u;
    SET_GPR_U32(ctx, 31, 0x20F068u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20F060u, 0x20F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F068u;
label_20f068:
    // 0x20f068: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20f068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f06c: 0x8cc402d0  lw          $a0, 0x2D0($a2)
    ctx->pc = 0x20f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x20f070: 0xe480011c  swc1        $f0, 0x11C($a0)
    ctx->pc = 0x20f070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 284), bits); }
    // 0x20f074: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f078: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20f078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f07c: 0x8cc302d0  lw          $v1, 0x2D0($a2)
    ctx->pc = 0x20f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x20f080: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x20f080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x20f084: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x20f084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20f088: 0x8fb30528  lw          $s3, 0x528($sp)
    ctx->pc = 0x20f088u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f08c: 0x8e6302d0  lw          $v1, 0x2D0($s3)
    ctx->pc = 0x20f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
    // 0x20f090: 0xe46e0124  swc1        $f14, 0x124($v1)
    ctx->pc = 0x20f090u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x20f094: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f098: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x20f098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x20f09c: 0x94a30140  lhu         $v1, 0x140($a1)
    ctx->pc = 0x20f09cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x20f0a0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x20f0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x20f0a4: 0xa4a30140  sh          $v1, 0x140($a1)
    ctx->pc = 0x20f0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x20f0a8u;
}
