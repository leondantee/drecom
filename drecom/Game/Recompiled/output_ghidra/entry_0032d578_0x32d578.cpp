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

// Function: entry_0032d578
// Address: 0x32d578 - 0x32d7a0
void entry_0032d578_0x32d578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d578_0x32d578");
#endif

    switch (ctx->pc) {
        case 0x32d604u: goto label_32d604;
        case 0x32d61cu: goto label_32d61c;
        case 0x32d65cu: goto label_32d65c;
        case 0x32d674u: goto label_32d674;
        case 0x32d6b4u: goto label_32d6b4;
        case 0x32d6ccu: goto label_32d6cc;
        case 0x32d70cu: goto label_32d70c;
        case 0x32d724u: goto label_32d724;
        default: break;
    }

    ctx->pc = 0x32d578u;

    // 0x32d578: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32d57c: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x32d57cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32d580: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32d584: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x32d584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32d588: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32d588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32d58c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32d58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32d590: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x32d590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32d594: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x32d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32d598: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x32d598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32d59c: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x32d59cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32d5a0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32d5a4: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x32d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x32d5a8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x32d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5ac: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x32d5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x32d5b0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5b4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x32d5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x32d5b8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x32d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5bc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x32d5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x32d5c0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32d5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5c4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x32d5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x32d5c8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x32d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5cc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x32d5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x32d5d0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x32d5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5d4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x32d5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x32d5d8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x32d5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5dc: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x32d5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x32d5e0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x32d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5e4: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x32d5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x32d5e8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32d5ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32d5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d5f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d5f4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5f8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d5f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d5fc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D5FCu;
    SET_GPR_U32(ctx, 31, 0x32D604u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D5FCu, 0x32D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D604u;
label_32d604:
    // 0x32d604: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32d604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32d608: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x32d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32d60c: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32d60cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32d610: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x32d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d614: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D614u;
    SET_GPR_U32(ctx, 31, 0x32D61Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D614u, 0x32D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D61Cu;
label_32d61c:
    // 0x32d61c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32d620: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32d620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32d624: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32d624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32d628: 0x3c21825  or          $v1, $fp, $v0
    ctx->pc = 0x32d628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32d62c: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x32d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32d630: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32d630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32d634: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32d634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32d638: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x32d638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32d63c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32d640: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32d644: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32d644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d64c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32d64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d650: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d650u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d654: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D654u;
    SET_GPR_U32(ctx, 31, 0x32D65Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D654u, 0x32D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D65Cu;
label_32d65c:
    // 0x32d65c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32d660: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32d664: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32d664u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32d668: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x32d668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d66c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D66Cu;
    SET_GPR_U32(ctx, 31, 0x32D674u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D66Cu, 0x32D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D674u;
label_32d674:
    // 0x32d674: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32d674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32d678: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32d67c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32d680: 0x3c21825  or          $v1, $fp, $v0
    ctx->pc = 0x32d680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32d684: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x32d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32d688: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32d688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32d68c: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32d68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32d690: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x32d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x32d694: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32d694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32d698: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32d698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32d69c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x32d69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d6a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32d6a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d6a4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32d6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d6a8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d6a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d6ac: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D6ACu;
    SET_GPR_U32(ctx, 31, 0x32D6B4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D6ACu, 0x32D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D6B4u;
label_32d6b4:
    // 0x32d6b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32d6b8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32d6bc: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32d6bcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32d6c0: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x32d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d6c4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D6C4u;
    SET_GPR_U32(ctx, 31, 0x32D6CCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D6C4u, 0x32D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D6CCu;
label_32d6cc:
    // 0x32d6cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32d6d0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32d6d4: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x32d6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32d6d8: 0x3c61825  or          $v1, $fp, $a2
    ctx->pc = 0x32d6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 6));
    // 0x32d6dc: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x32d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x32d6e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32d6e4: 0x3402fffc  ori         $v0, $zero, 0xFFFC
    ctx->pc = 0x32d6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32d6e8: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x32d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x32d6ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32d6f0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32d6f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d6f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d6fc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d700: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d700u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d704: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D704u;
    SET_GPR_U32(ctx, 31, 0x32D70Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D704u, 0x32D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D70Cu;
label_32d70c:
    // 0x32d70c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32d710: 0x24667000  addiu       $a2, $v1, 0x7000
    ctx->pc = 0x32d710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32d714: 0x30deffff  andi        $fp, $a2, 0xFFFF
    ctx->pc = 0x32d714u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x32d718: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x32d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d71c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D71Cu;
    SET_GPR_U32(ctx, 31, 0x32D724u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D71Cu, 0x32D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D724u;
label_32d724:
    // 0x32d724: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32d724u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d728: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x32d728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32d72c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x32d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x32d730: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x32d730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32d734: 0x3c31025  or          $v0, $fp, $v1
    ctx->pc = 0x32d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 3));
    // 0x32d738: 0x2603004c  addiu       $v1, $s0, 0x4C
    ctx->pc = 0x32d738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x32d73c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32d740: 0x3402fffc  ori         $v0, $zero, 0xFFFC
    ctx->pc = 0x32d740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32d744: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x32d744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x32d748: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32d748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32d74c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32d750: 0x2446e870  addiu       $a2, $v0, -0x1790
    ctx->pc = 0x32d750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961264));
    // 0x32d754: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x32d754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x32d758: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x32d758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32d75c: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x32d75cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x32d760: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x32d760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x32d764: 0x92222830  lbu         $v0, 0x2830($s1)
    ctx->pc = 0x32d764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10288)));
    // 0x32d768: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32D768u;
    {
        const bool branch_taken_0x32d768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d768) {
            ctx->pc = 0x32D7B8u;
            return;
        }
    }
    ctx->pc = 0x32D770u;
    // 0x32d770: 0x92232904  lbu         $v1, 0x2904($s1)
    ctx->pc = 0x32d770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10500)));
    // 0x32d774: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x32d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32d778: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32D778u;
    {
        const bool branch_taken_0x32d778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d778) {
            ctx->pc = 0x32D7A0u;
            return;
        }
    }
    ctx->pc = 0x32D780u;
    // 0x32d780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d784: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D784u;
    {
        const bool branch_taken_0x32d784 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d784) {
            ctx->pc = 0x32D7A0u;
            return;
        }
    }
    ctx->pc = 0x32D78Cu;
    // 0x32d78c: 0x92222909  lbu         $v0, 0x2909($s1)
    ctx->pc = 0x32d78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10505)));
    // 0x32d790: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d794: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32D794u;
    {
        const bool branch_taken_0x32d794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d794) {
            ctx->pc = 0x32D7B8u;
            return;
        }
    }
    ctx->pc = 0x32D79Cu;
    // 0x32d79c: 0x0  nop
    ctx->pc = 0x32d79cu;
    // NOP
    ctx->pc = 0x32d7a0u;
}
