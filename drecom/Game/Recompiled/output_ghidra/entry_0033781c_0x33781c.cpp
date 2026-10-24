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

// Function: entry_0033781c
// Address: 0x33781c - 0x3378d8
void entry_0033781c_0x33781c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033781c_0x33781c");
#endif

    switch (ctx->pc) {
        case 0x3378b8u: goto label_3378b8;
        default: break;
    }

    ctx->pc = 0x33781cu;

    // 0x33781c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337820: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337824: 0xa0224e68  sb          $v0, 0x4E68($at)
    ctx->pc = 0x337824u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x894E68u, _value); } while (0);
    // 0x337828: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x337828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x33782c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x33782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x337830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337834: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337838: 0xe4204e64  swc1        $f0, 0x4E64($at)
    ctx->pc = 0x337838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894E64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E64u, _value); } while (0); }
    // 0x33783c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x33783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x337840: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337844: 0xa0224e69  sb          $v0, 0x4E69($at)
    ctx->pc = 0x337844u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E69u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x894E69u, _value); } while (0);
    // 0x337848: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x337848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x33784c: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x33784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x337850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337854: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337858: 0xe4204e60  swc1        $f0, 0x4E60($at)
    ctx->pc = 0x337858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894E60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E60u, _value); } while (0); }
    // 0x33785c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x33785cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x337860: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x337860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x337864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337868: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33786c: 0xe4204e6c  swc1        $f0, 0x4E6C($at)
    ctx->pc = 0x33786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894E6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E6Cu, _value); } while (0); }
    // 0x337870: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x337870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x337874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337878: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33787c: 0xe4204e70  swc1        $f0, 0x4E70($at)
    ctx->pc = 0x33787cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894E70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E70u, _value); } while (0); }
    // 0x337880: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337884: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337888: 0xa0224e75  sb          $v0, 0x4E75($at)
    ctx->pc = 0x337888u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E75u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x894E75u, _value); } while (0);
    // 0x33788c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33788cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x337890: 0x24436158  addiu       $v1, $v0, 0x6158
    ctx->pc = 0x337890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24920));
    // 0x337894: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337898: 0xac234e80  sw          $v1, 0x4E80($at)
    ctx->pc = 0x337898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x894E80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E80u, _value); } while (0);
    // 0x33789c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3378a0: 0x24444e88  addiu       $a0, $v0, 0x4E88
    ctx->pc = 0x3378a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20104));
    // 0x3378a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3378a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3378a8: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x3378a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x3378ac: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3378acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3378b0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x3378B0u;
    SET_GPR_U32(ctx, 31, 0x3378B8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x3378B8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3378B8u) { return; }
    ctx->pc = 0x3378B8u;
label_3378b8:
    // 0x3378b8: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x3378b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x3378bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3378bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3378c0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3378C0u;
    {
        const bool branch_taken_0x3378c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3378c0) {
            ctx->pc = 0x33790Cu;
            return;
        }
    }
    ctx->pc = 0x3378C8u;
    // 0x3378c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3378C8u;
    {
        const bool branch_taken_0x3378c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3378c8) {
            ctx->pc = 0x3378D8u;
            return;
        }
    }
    ctx->pc = 0x3378D0u;
    // 0x3378d0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3378D0u;
    {
        const bool branch_taken_0x3378d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3378d0) {
            ctx->pc = 0x337984u;
            return;
        }
    }
    ctx->pc = 0x3378D8u;
}
