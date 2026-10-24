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

// Function: entry_001d80f0
// Address: 0x1d80f0 - 0x1d81b8
void entry_001d80f0_0x1d80f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d80f0_0x1d80f0");
#endif

    switch (ctx->pc) {
        case 0x1d8118u: goto label_1d8118;
        case 0x1d8124u: goto label_1d8124;
        case 0x1d8194u: goto label_1d8194;
        default: break;
    }

    ctx->pc = 0x1d80f0u;

    // 0x1d80f0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d80f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d80f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d80f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d80f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d80f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d80fc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1d80fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8100: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d8100u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d8104: 0x0  nop
    ctx->pc = 0x1d8104u;
    // NOP
    // 0x1d8108: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1d8108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d810c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1d810cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d8110: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1D8110u;
    SET_GPR_U32(ctx, 31, 0x1D8118u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1D8110u, 0x1D8118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8118u;
label_1d8118:
    // 0x1d8118: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1d8118u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1d811c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x1D811Cu;
    SET_GPR_U32(ctx, 31, 0x1D8124u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x1D811Cu, 0x1D8124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8124u;
label_1d8124:
    // 0x1d8124: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8128: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d8128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d812c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1d812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8130: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d8130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d8134: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1d8138: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1d8138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d813c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d813cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8144: 0x0  nop
    ctx->pc = 0x1d8144u;
    // NOP
    // 0x1d8148: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d8148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d814c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d814cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d8150: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8154: 0x0  nop
    ctx->pc = 0x1d8154u;
    // NOP
    // 0x1d8158: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d8158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1d815c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8160: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d8160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1d8164: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d8164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8168: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d816c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d816cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d8170: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d8170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1d8174: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d8174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d817c: 0x0  nop
    ctx->pc = 0x1d817cu;
    // NOP
    // 0x1d8180: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1d8180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1d8184: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d8184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d8188: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d8188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d818c: 0xc040c24  jal         func_103090
    ctx->pc = 0x1D818Cu;
    SET_GPR_U32(ctx, 31, 0x1D8194u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1D8194u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8194u) { return; }
    ctx->pc = 0x1D8194u;
label_1d8194:
    // 0x1d8194: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8198: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1d8198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d819c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d81a0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1d81a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1d81a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D81A4u;
    {
        const bool branch_taken_0x1d81a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d81a4) {
            ctx->pc = 0x1D81B8u;
            return;
        }
    }
    ctx->pc = 0x1D81ACu;
    // 0x1d81ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d81acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d81b0: 0x0  nop
    ctx->pc = 0x1d81b0u;
    // NOP
    // 0x1d81b4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d81b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->pc = 0x1d81b8u;
}
