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

// Function: entry_002f61f4
// Address: 0x2f61f4 - 0x2f6300
void entry_002f61f4_0x2f61f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f61f4_0x2f61f4");
#endif

    switch (ctx->pc) {
        case 0x2f6220u: goto label_2f6220;
        case 0x2f6244u: goto label_2f6244;
        case 0x2f6280u: goto label_2f6280;
        case 0x2f62bcu: goto label_2f62bc;
        default: break;
    }

    ctx->pc = 0x2f61f4u;

    // 0x2f61f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f61f8: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f61f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f61fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f61fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f6200: 0x1483003f  bne         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2F6200u;
    {
        const bool branch_taken_0x2f6200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6200) {
            ctx->pc = 0x2F6300u;
            return;
        }
    }
    ctx->pc = 0x2F6208u;
    // 0x2f6208: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f6208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f620c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6210: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2f6210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f6214: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2f6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f6218: 0xc0bd69c  jal         func_2F5A70
    ctx->pc = 0x2F6218u;
    SET_GPR_U32(ctx, 31, 0x2F6220u);
    ctx->pc = 0x2F5A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5A70u, 0x2F6218u, 0x2F6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6220u;
label_2f6220:
    // 0x2f6220: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6224: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x2f6224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    // 0x2f6228: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f622c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f6230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6234: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F6234u;
    {
        const bool branch_taken_0x2f6234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6234) {
            ctx->pc = 0x2F6300u;
            return;
        }
    }
    ctx->pc = 0x2F623Cu;
    // 0x2f623c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F623Cu;
    SET_GPR_U32(ctx, 31, 0x2F6244u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F623Cu, 0x2F6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6244u;
label_2f6244:
    // 0x2f6244: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f6244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f6248: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f624c: 0x0  nop
    ctx->pc = 0x2f624cu;
    // NOP
    // 0x2f6250: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f6250u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6254: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2f6254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6258: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x2f6258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x2f625c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f625cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f6260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6264: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2f6264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6268: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f626c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f626cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f6270: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f6270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f6274: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f6274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f6278: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6278u;
    SET_GPR_U32(ctx, 31, 0x2F6280u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6278u, 0x2F6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6280u;
label_2f6280:
    // 0x2f6280: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f6280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f6284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6288: 0x0  nop
    ctx->pc = 0x2f6288u;
    // NOP
    // 0x2f628c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f628cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6290: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2f6290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6294: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x2f6294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x2f6298: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f6298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f629c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f629cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f62a0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2f62a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f62a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f62a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f62a8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f62a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f62ac: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f62acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f62b0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f62b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f62b4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F62B4u;
    SET_GPR_U32(ctx, 31, 0x2F62BCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F62B4u, 0x2F62BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62BCu;
label_2f62bc:
    // 0x2f62bc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f62c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f62c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f62c4: 0x0  nop
    ctx->pc = 0x2f62c4u;
    // NOP
    // 0x2f62c8: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f62c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f62cc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2f62ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f62d0: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x2f62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x2f62d4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f62d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f62d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f62d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f62dc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f62dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f62e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f62e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f62e4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f62e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f62e8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f62e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f62ec: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f62ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f62f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f62f4: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2f62f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2f62f8: 0xc0c4908  jal         func_312420
    ctx->pc = 0x2F62F8u;
    SET_GPR_U32(ctx, 31, 0x2F6300u);
    ctx->pc = 0x312420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312420u, 0x2F62F8u, 0x2F6300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6300u;
}
