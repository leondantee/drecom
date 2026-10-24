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

// Function: Oba_link
// Address: 0x1891b0 - 0x1892d0
void Oba_link_0x1891b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oba_link_0x1891b0");
#endif

    switch (ctx->pc) {
        case 0x189278u: goto label_189278;
        case 0x1892a4u: goto label_1892a4;
        default: break;
    }

    ctx->pc = 0x1891b0u;

    // 0x1891b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1891b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1891b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1891b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1891b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1891b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1891bc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1891bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x1891c0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1891c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1891c4: 0x8c222508  lw          $v0, 0x2508($at)
    ctx->pc = 0x1891c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2508u));
    // 0x1891c8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1891C8u;
    {
        const bool branch_taken_0x1891c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1891c8) {
            ctx->pc = 0x189204u;
            goto label_189204;
        }
    }
    ctx->pc = 0x1891D0u;
    // 0x1891d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1891d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1891d4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1891d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1891d8: 0xac222500  sw          $v0, 0x2500($at)
    ctx->pc = 0x1891d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B2500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B2500u, _value); } while (0);
    // 0x1891dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1891dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1891e0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1891e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1891e4: 0xac222504  sw          $v0, 0x2504($at)
    ctx->pc = 0x1891e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B2504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B2504u, _value); } while (0);
    // 0x1891e8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1891e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1891ec: 0x8c222508  lw          $v0, 0x2508($at)
    ctx->pc = 0x1891ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2508u));
    // 0x1891f0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1891f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1891f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1891f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1891f8: 0xac4300ec  sw          $v1, 0xEC($v0)
    ctx->pc = 0x1891f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 3));
    // 0x1891fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1891FCu;
    {
        const bool branch_taken_0x1891fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1891fc) {
            ctx->pc = 0x189254u;
            goto label_189254;
        }
    }
    ctx->pc = 0x189204u;
label_189204:
    // 0x189204: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x189204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189208: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x18920c: 0x8c222504  lw          $v0, 0x2504($at)
    ctx->pc = 0x18920cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2504u));
    // 0x189210: 0xac430120  sw          $v1, 0x120($v0)
    ctx->pc = 0x189210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 3));
    // 0x189214: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189218: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x18921c: 0xac222504  sw          $v0, 0x2504($at)
    ctx->pc = 0x18921cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B2504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B2504u, _value); } while (0);
    // 0x189220: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x189220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x189224: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189224u;
    {
        const bool branch_taken_0x189224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189224) {
            ctx->pc = 0x189240u;
            goto label_189240;
        }
    }
    ctx->pc = 0x18922Cu;
    // 0x18922c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x189230: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189234: 0xac4300ec  sw          $v1, 0xEC($v0)
    ctx->pc = 0x189234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 3));
    // 0x189238: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x189238u;
    {
        const bool branch_taken_0x189238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189238) {
            ctx->pc = 0x189254u;
            goto label_189254;
        }
    }
    ctx->pc = 0x189240u;
label_189240:
    // 0x189240: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x189244: 0x8c222508  lw          $v0, 0x2508($at)
    ctx->pc = 0x189244u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2508u));
    // 0x189248: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x189248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18924c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189250: 0xac4300ec  sw          $v1, 0xEC($v0)
    ctx->pc = 0x189250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 3));
label_189254:
    // 0x189254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189258: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x189258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x18925c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18925cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189264: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x189264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x189268: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18926c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x18926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x189270: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x189270u;
    SET_GPR_U32(ctx, 31, 0x189278u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x189270u, 0x189278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189278u;
label_189278:
    // 0x189278: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18927c: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x18927cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
    // 0x189280: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x189280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x189284: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189288: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x189288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x18928c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189290: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x189290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x189294: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189298: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x189298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x18929c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x18929Cu;
    SET_GPR_U32(ctx, 31, 0x1892A4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1892A4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1892A4u) { return; }
    ctx->pc = 0x1892A4u;
label_1892a4:
    // 0x1892a4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1892a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1892a8: 0x8c222508  lw          $v0, 0x2508($at)
    ctx->pc = 0x1892a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2508u));
    // 0x1892ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1892acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1892b0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1892b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1892b4: 0xac222508  sw          $v0, 0x2508($at)
    ctx->pc = 0x1892b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B2508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B2508u, _value); } while (0);
    // 0x1892b8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1892b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1892bc: 0x8c222508  lw          $v0, 0x2508($at)
    ctx->pc = 0x1892bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2508u));
    // 0x1892c0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1892c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1892c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1892c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1892c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1892C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1892C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1892D0u;
}
