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

// Function: entry_001b4194
// Address: 0x1b4194 - 0x1b42fc
void entry_001b4194_0x1b4194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4194_0x1b4194");
#endif

    switch (ctx->pc) {
        case 0x1b41f0u: goto label_1b41f0;
        case 0x1b4204u: goto label_1b4204;
        case 0x1b4258u: goto label_1b4258;
        case 0x1b42acu: goto label_1b42ac;
        case 0x1b42bcu: goto label_1b42bc;
        default: break;
    }

    ctx->pc = 0x1b4194u;

    // 0x1b4194: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1b4194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b4198: 0x1260015b  beqz        $s3, . + 4 + (0x15B << 2)
    ctx->pc = 0x1B4198u;
    {
        const bool branch_taken_0x1b4198 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4198) {
            ctx->pc = 0x1B4708u;
            return;
        }
    }
    ctx->pc = 0x1B41A0u;
    // 0x1b41a0: 0x2561006  srlv        $v0, $s6, $s2
    ctx->pc = 0x1b41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), GPR_U32(ctx, 18) & 0x1F));
    // 0x1b41a4: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x1b41a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1b41a8: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x1B41A8u;
    {
        const bool branch_taken_0x1b41a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b41a8) {
            ctx->pc = 0x1B46E8u;
            return;
        }
    }
    ctx->pc = 0x1B41B0u;
    // 0x1b41b0: 0x2c01027  not         $v0, $s6
    ctx->pc = 0x1b41b0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 22) | GPR_U64(ctx, 0)));
    // 0x1b41b4: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x1b41b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1b41b8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b41b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b41bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b41bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b41c0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b41c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1b41c4: 0x14400148  bnez        $v0, . + 4 + (0x148 << 2)
    ctx->pc = 0x1B41C4u;
    {
        const bool branch_taken_0x1b41c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b41c4) {
            ctx->pc = 0x1B46E8u;
            return;
        }
    }
    ctx->pc = 0x1B41CCu;
    // 0x1b41cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b41ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b41d0: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1b41d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b41d4: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x1b41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1b41d8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1b41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b41dc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b41dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b41e0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b41e4: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1b41e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b41e8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B41E8u;
    SET_GPR_U32(ctx, 31, 0x1B41F0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B41F0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B41F0u) { return; }
    ctx->pc = 0x1B41F0u;
label_1b41f0:
    // 0x1b41f0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b41f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b41f4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1b41f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b41f8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1b41f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b41fc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B41FCu;
    SET_GPR_U32(ctx, 31, 0x1B4204u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B41FCu, 0x1B4204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4204u;
label_1b4204:
    // 0x1b4204: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b4204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4208: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1b4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b420c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b420cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4210: 0x0  nop
    ctx->pc = 0x1b4210u;
    // NOP
    // 0x1b4214: 0x45000134  bc1f        . + 4 + (0x134 << 2)
    ctx->pc = 0x1B4214u;
    {
        const bool branch_taken_0x1b4214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b4214) {
            ctx->pc = 0x1B46E8u;
            return;
        }
    }
    ctx->pc = 0x1B421Cu;
    // 0x1b421c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1b421cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4220: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1b4220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4224: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b4224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4228: 0x0  nop
    ctx->pc = 0x1b4228u;
    // NOP
    // 0x1b422c: 0x4501012e  bc1t        . + 4 + (0x12E << 2)
    ctx->pc = 0x1B422Cu;
    {
        const bool branch_taken_0x1b422c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b422c) {
            ctx->pc = 0x1B46E8u;
            return;
        }
    }
    ctx->pc = 0x1B4234u;
    // 0x1b4234: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1b4234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4238: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b4238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b423c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b423cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4240: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1b4240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4244: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1b4244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4248: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b4248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b424c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b424cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b4250: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B4250u;
    SET_GPR_U32(ctx, 31, 0x1B4258u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B4250u, 0x1B4258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4258u;
label_1b4258:
    // 0x1b4258: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1b4258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1b425c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4260: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b4260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4264: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1b4264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4268: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b426c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1b426cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4270: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b4270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4274: 0x0  nop
    ctx->pc = 0x1b4274u;
    // NOP
    // 0x1b4278: 0x4500011b  bc1f        . + 4 + (0x11B << 2)
    ctx->pc = 0x1B4278u;
    {
        const bool branch_taken_0x1b4278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b4278) {
            ctx->pc = 0x1B46E8u;
            return;
        }
    }
    ctx->pc = 0x1B4280u;
    // 0x1b4280: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b4284: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1B4284u;
    {
        const bool branch_taken_0x1b4284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4284) {
            ctx->pc = 0x1B4580u;
            return;
        }
    }
    ctx->pc = 0x1B428Cu;
    // 0x1b428c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b4290: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1b4290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1b4294: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1b4294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b4298: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b429c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1b429cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1b42a0: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1b42a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b42a4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B42A4u;
    SET_GPR_U32(ctx, 31, 0x1B42ACu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B42A4u, 0x1B42ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42ACu;
label_1b42ac:
    // 0x1b42ac: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1b42acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b42b0: 0xc7ad00f8  lwc1        $f13, 0xF8($sp)
    ctx->pc = 0x1b42b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b42b4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B42B4u;
    SET_GPR_U32(ctx, 31, 0x1B42BCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B42B4u, 0x1B42BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42BCu;
label_1b42bc:
    // 0x1b42bc: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b42bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b42c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b42c4: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1b42c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1b42c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b42c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b42cc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1b42ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1b42d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b42d4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B42D4u;
    {
        const bool branch_taken_0x1b42d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b42d4) {
            ctx->pc = 0x1B4354u;
            return;
        }
    }
    ctx->pc = 0x1B42DCu;
    // 0x1b42dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b42e0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B42E0u;
    {
        const bool branch_taken_0x1b42e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b42e0) {
            ctx->pc = 0x1B4328u;
            return;
        }
    }
    ctx->pc = 0x1B42E8u;
    // 0x1b42e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b42ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B42ECu;
    {
        const bool branch_taken_0x1b42ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b42ec) {
            ctx->pc = 0x1B42FCu;
            return;
        }
    }
    ctx->pc = 0x1B42F4u;
    // 0x1b42f4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B42F4u;
    {
        const bool branch_taken_0x1b42f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b42f4) {
            ctx->pc = 0x1B4378u;
            return;
        }
    }
    ctx->pc = 0x1B42FCu;
}
