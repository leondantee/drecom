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

// Function: scalbnf
// Address: 0x1151b0 - 0x115310
void scalbnf_0x1151b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scalbnf_0x1151b0");
#endif

    switch (ctx->pc) {
        case 0x1152ccu: goto label_1152cc;
        default: break;
    }

    ctx->pc = 0x1151b0u;

    // 0x1151b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1151b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1151b4: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x1151b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1151b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1151b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1151bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1151bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151c0: 0x3c077f80  lui         $a3, 0x7F80
    ctx->pc = 0x1151c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32640 << 16));
    // 0x1151c4: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x1151c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1151c8: 0x21dc3  sra         $v1, $v0, 23
    ctx->pc = 0x1151c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x1151cc: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1151CCu;
    {
        const bool branch_taken_0x1151cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1151D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151CCu;
        // 0x1151d0: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151cc) {
            ctx->pc = 0x115240u;
            goto label_115240;
        }
    }
    ctx->pc = 0x1151D4u;
    // 0x1151d4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1151d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1151d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1151d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1151dc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1151dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1151e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1151E0u;
    {
        const bool branch_taken_0x1151e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1151E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151E0u;
        // 0x1151e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151e0) {
            ctx->pc = 0x1151F8u;
            goto label_1151f8;
        }
    }
    ctx->pc = 0x1151E8u;
    // 0x1151e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1151e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1151ec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1151ECu;
    {
        const bool branch_taken_0x1151ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151ECu;
        // 0x1151f0: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151ec) {
            ctx->pc = 0x115308u;
            goto label_115308;
        }
    }
    ctx->pc = 0x1151F4u;
    // 0x1151f4: 0x0  nop
    ctx->pc = 0x1151f4u;
    // NOP
label_1151f8:
    // 0x1151f8: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x1151f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x1151fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1151fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115200: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x115200u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115204: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x115204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x115208: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x115208u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11520c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11520cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115210: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x115210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x115214: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x115214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x115218: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x115218u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x11521c: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x11521cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x115220: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x115220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x115224: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115224u;
    {
        const bool branch_taken_0x115224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115224u;
        // 0x115228: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115224) {
            ctx->pc = 0x115240u;
            goto label_115240;
        }
    }
    ctx->pc = 0x11522Cu;
    // 0x11522c: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x11522cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x115230: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x115230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x115234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115238: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x115238u;
    {
        const bool branch_taken_0x115238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115238u;
        // 0x11523c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115238) {
            ctx->pc = 0x115300u;
            goto label_115300;
        }
    }
    ctx->pc = 0x115240u;
label_115240:
    // 0x115240: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x115240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x115244: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115244u;
    {
        const bool branch_taken_0x115244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x115248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115244u;
        // 0x115248: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115244) {
            ctx->pc = 0x115258u;
            goto label_115258;
        }
    }
    ctx->pc = 0x11524Cu;
    // 0x11524c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x11524cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x115250: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x115250u;
    {
        const bool branch_taken_0x115250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115250u;
        // 0x115254: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115250) {
            ctx->pc = 0x115300u;
            goto label_115300;
        }
    }
    ctx->pc = 0x115258u;
label_115258:
    // 0x115258: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x115258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x11525c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11525Cu;
    {
        const bool branch_taken_0x11525c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11525c) {
            ctx->pc = 0x1152B4u;
            goto label_1152b4;
        }
    }
    ctx->pc = 0x115264u;
    // 0x115264: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x115264u;
    {
        const bool branch_taken_0x115264 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x115268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115264u;
        // 0x115268: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115264) {
            ctx->pc = 0x115290u;
            goto label_115290;
        }
    }
    ctx->pc = 0x11526Cu;
    // 0x11526c: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x11526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x115270: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x115270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x115274: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x115274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x115278: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x115278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11527c: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x11527cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x115280: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x115280u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115284: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x115284u;
    {
        const bool branch_taken_0x115284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115284u;
        // 0x115288: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115284) {
            ctx->pc = 0x115308u;
            goto label_115308;
        }
    }
    ctx->pc = 0x11528Cu;
    // 0x11528c: 0x0  nop
    ctx->pc = 0x11528cu;
    // NOP
label_115290:
    // 0x115290: 0x2862ffe8  slti        $v0, $v1, -0x18
    ctx->pc = 0x115290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967272) ? 1 : 0);
    // 0x115294: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x115294u;
    {
        const bool branch_taken_0x115294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115294u;
        // 0x115298: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115294) {
            ctx->pc = 0x1152D4u;
            goto label_1152d4;
        }
    }
    ctx->pc = 0x11529Cu;
    // 0x11529c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11529cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1152a0: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x1152a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x1152a4: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x1152a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x1152a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1152a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1152ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1152ACu;
    {
        const bool branch_taken_0x1152ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1152ac) {
            ctx->pc = 0x1152C0u;
            goto label_1152c0;
        }
    }
    ctx->pc = 0x1152B4u;
label_1152b4:
    // 0x1152b4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1152b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1152b8: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1152b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1152bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1152bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1152c0:
    // 0x1152c0: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1152c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1152c4: 0xc0453da  jal         func_114F68
    ctx->pc = 0x1152C4u;
    SET_GPR_U32(ctx, 31, 0x1152CCu);
    ctx->pc = 0x1152C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152C4u;
    // 0x1152c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x114F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F68u, 0x1152C4u, 0x1152CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152CCu;
label_1152cc:
    // 0x1152cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1152CCu;
    {
        const bool branch_taken_0x1152cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152CCu;
        // 0x1152d0: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152cc) {
            ctx->pc = 0x115300u;
            goto label_115300;
        }
    }
    ctx->pc = 0x1152D4u;
label_1152d4:
    // 0x1152d4: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x1152d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x1152d8: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x1152d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x1152dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1152dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1152e0: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x1152e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x1152e4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1152e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1152e8: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1152e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1152ec: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x1152ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x1152f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1152f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1152f4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1152f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1152f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1152f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1152fc: 0x0  nop
    ctx->pc = 0x1152fcu;
    // NOP
label_115300:
    // 0x115300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115304: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x115304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_115308:
    // 0x115308: 0x3e00008  jr          $ra
    ctx->pc = 0x115308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115308u;
        // 0x11530c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115310u;
}
