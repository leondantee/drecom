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

// Function: entry_0027d1a4
// Address: 0x27d1a4 - 0x27d250
void entry_0027d1a4_0x27d1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d1a4_0x27d1a4");
#endif

    switch (ctx->pc) {
        case 0x27d1f4u: goto label_27d1f4;
        case 0x27d1fcu: goto label_27d1fc;
        case 0x27d220u: goto label_27d220;
        case 0x27d234u: goto label_27d234;
        case 0x27d248u: goto label_27d248;
        default: break;
    }

    ctx->pc = 0x27d1a4u;

    // 0x27d1a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d1a8: 0x0  nop
    ctx->pc = 0x27d1a8u;
    // NOP
    // 0x27d1ac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x27d1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d1b0: 0x3c024690  lui         $v0, 0x4690
    ctx->pc = 0x27d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18064 << 16));
    // 0x27d1b4: 0x3442ec00  ori         $v0, $v0, 0xEC00
    ctx->pc = 0x27d1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60416);
    // 0x27d1b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d1bc: 0x0  nop
    ctx->pc = 0x27d1bcu;
    // NOP
    // 0x27d1c0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27d1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x27d1c4: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x27d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
    // 0x27d1c8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27d1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d1d0: 0x0  nop
    ctx->pc = 0x27d1d0u;
    // NOP
    // 0x27d1d4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x27d1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27d1d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27d1dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d1e0: 0x0  nop
    ctx->pc = 0x27d1e0u;
    // NOP
    // 0x27d1e4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x27d1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x27d1e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d1ec: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x27D1ECu;
    SET_GPR_U32(ctx, 31, 0x27D1F4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x27D1F4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D1F4u) { return; }
    ctx->pc = 0x27D1F4u;
label_27d1f4:
    // 0x27d1f4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D1F4u;
    SET_GPR_U32(ctx, 31, 0x27D1FCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D1F4u, 0x27D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1FCu;
label_27d1fc:
    // 0x27d1fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x27d200: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27d200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27d204: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d208: 0x0  nop
    ctx->pc = 0x27d208u;
    // NOP
    // 0x27d20c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27d20cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d210: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d214: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27d214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d218: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x27D218u;
    SET_GPR_U32(ctx, 31, 0x27D220u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x27D220u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D220u) { return; }
    ctx->pc = 0x27D220u;
label_27d220:
    // 0x27d220: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27d220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d224: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27d224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d228: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x27d228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d22c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x27D22Cu;
    SET_GPR_U32(ctx, 31, 0x27D234u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x27D234u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D234u) { return; }
    ctx->pc = 0x27D234u;
label_27d234:
    // 0x27d234: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x27d234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x27d238: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x27d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d23c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x27d23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27d240: 0xc0870ec  jal         func_21C3B0
    ctx->pc = 0x27D240u;
    SET_GPR_U32(ctx, 31, 0x27D248u);
    ctx->pc = 0x21C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3B0u, 0x27D240u, 0x27D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D248u;
label_27d248:
    // 0x27d248: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x27d248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27d24c: 0x0  nop
    ctx->pc = 0x27d24cu;
    // NOP
    ctx->pc = 0x27d250u;
}
