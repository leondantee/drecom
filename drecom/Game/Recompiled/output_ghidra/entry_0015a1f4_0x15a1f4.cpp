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

// Function: entry_0015a1f4
// Address: 0x15a1f4 - 0x15a28c
void entry_0015a1f4_0x15a1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a1f4_0x15a1f4");
#endif

    switch (ctx->pc) {
        case 0x15a20cu: goto label_15a20c;
        case 0x15a228u: goto label_15a228;
        case 0x15a25cu: goto label_15a25c;
        case 0x15a270u: goto label_15a270;
        default: break;
    }

    ctx->pc = 0x15a1f4u;

    // 0x15a1f4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x15a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a1f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x15a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a1fc: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x15a1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a200: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x15a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15a204: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15A204u;
    SET_GPR_U32(ctx, 31, 0x15A20Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15A204u, 0x15A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A20Cu;
label_15a20c:
    // 0x15a20c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x15a20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x15a210: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a214: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x15a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x15a218: 0x24455550  addiu       $a1, $v0, 0x5550
    ctx->pc = 0x15a218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21840));
    // 0x15a21c: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x15a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a220: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x15A220u;
    SET_GPR_U32(ctx, 31, 0x15A228u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x15A228u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A228u) { return; }
    ctx->pc = 0x15A228u;
label_15a228:
    // 0x15a228: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x15a228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a22c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x15a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a230: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a234: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a238: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15a238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15a23c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x15a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a240: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x15a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a244: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15a244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a248: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a24c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15a24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15a250: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x15a250u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15a254: 0xc045630  jal         func_1158C0
    ctx->pc = 0x15A254u;
    SET_GPR_U32(ctx, 31, 0x15A25Cu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x15A254u, 0x15A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A25Cu;
label_15a25c:
    // 0x15a25c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x15a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a260: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x15a260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a264: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x15a264u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x15a268: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15A268u;
    SET_GPR_U32(ctx, 31, 0x15A270u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15A268u, 0x15A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A270u;
label_15a270:
    // 0x15a270: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15a270u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15a274: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x15a274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x15a278: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a27c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a280: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x15a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a284: 0xc040ce4  jal         func_103390
    ctx->pc = 0x15A284u;
    SET_GPR_U32(ctx, 31, 0x15A28Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x15A28Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A28Cu) { return; }
    ctx->pc = 0x15A28Cu;
}
