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

// Function: sub_003AC100
// Address: 0x3ac100 - 0x3acd68
void sub_003AC100_0x3ac100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC100_0x3ac100");
#endif

    switch (ctx->pc) {
        case 0x3ac20cu: goto label_3ac20c;
        case 0x3ac22cu: goto label_3ac22c;
        case 0x3ac2ccu: goto label_3ac2cc;
        case 0x3ac2ecu: goto label_3ac2ec;
        case 0x3ac324u: goto label_3ac324;
        case 0x3ac41cu: goto label_3ac41c;
        case 0x3ac43cu: goto label_3ac43c;
        case 0x3ac4dcu: goto label_3ac4dc;
        case 0x3ac4fcu: goto label_3ac4fc;
        case 0x3acb98u: goto label_3acb98;
        default: break;
    }

    ctx->pc = 0x3ac100u;

    // 0x3ac100: 0x5f464947  .word       0x5F464947                   # bgtzl       $k0, . + 4 + (0x4947 << 2) # 00060000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AC100u;
    {
        const bool branch_taken_0x3ac100 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x3ac100) {
            ctx->pc = 0x3AC104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC100u;
            // 0x3ac104: 0x54415453  bnel        $v0, $at, . + 4 + (0x5453 << 2) (Delay Slot)
            // Likely branch instruction at 0x3AC104 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BE620u;
            return;
        }
    }
    ctx->pc = 0x3AC108u;
    // 0x3ac108: 0x3830253d  xori        $s0, $at, 0x253D
    ctx->pc = 0x3ac108u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)9533);
    // 0x3ac10c: 0xa0d3e78  j           func_834F9E0
    ctx->pc = 0x3AC10Cu;
    ctx->pc = 0x834F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x834F9E0u, 0x3AC10Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AC114u;
    // 0x3ac114: 0x0  nop
    ctx->pc = 0x3ac114u;
    // NOP
    // 0x3ac118: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac118u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC118 raw=0x47656373");
    // 0x3ac11c: 0x6e795373  ldr         $t9, 0x5373($s3)
    ctx->pc = 0x3ac11cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x3ac120: 0x74615063  .word       0x74615063                   # INVALID     $v1, $at, 0x5063 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac120u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC120 raw=0x74615063");
    // 0x3ac124: 0x44203a68  .word       0x44203A68                   # dmfc1       $zero, $f7 # 00000268 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac124u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x28 at 0x3AC124 raw=0x44203A68");
    // 0x3ac128: 0x4320414d  .word       0x4320414D                   # INVALID     $t9, $zero, 0x414D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ac128u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x3AC128 raw=0x4320414D");
    // 0x3ac12c: 0x20322e68  addi        $s2, $at, 0x2E68
    ctx->pc = 0x3ac12cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11880, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x3ac130: 0x73656f64  .word       0x73656F64                   # INVALID     $k1, $a1, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac130u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x3AC130 raw=0x73656F64");
    // 0x3ac134: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac134u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC134 raw=0x746F6E20");
    // 0x3ac138: 0x72657420  .word       0x72657420                   # madd1       $t6, $s3, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac138u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3ac13c: 0x616e696d  daddi       $t6, $t3, 0x696D
    ctx->pc = 0x3ac13cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x3ac140: 0xa0d6574  j           func_83595D0
    ctx->pc = 0x3AC140u;
    ctx->pc = 0x83595D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595D0u, 0x3AC140u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AC148u;
    // 0x3ac148: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac148u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC148 raw=0x47656373");
    // 0x3ac14c: 0x6e795373  ldr         $t9, 0x5373($s3)
    ctx->pc = 0x3ac14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x3ac150: 0x74615063  .word       0x74615063                   # INVALID     $v1, $at, 0x5063 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac150u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC150 raw=0x74615063");
    // 0x3ac154: 0x56203a68  bnel        $s1, $zero, . + 4 + (0x3A68 << 2)
    ctx->pc = 0x3AC154u;
    {
        const bool branch_taken_0x3ac154 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac154) {
            ctx->pc = 0x3AC158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC154u;
            // 0x3ac158: 0x20314649  addi        $s1, $at, 0x4649 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)17993, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BAAF8u;
            return;
        }
    }
    ctx->pc = 0x3AC15Cu;
    // 0x3ac15c: 0x73656f64  .word       0x73656F64                   # INVALID     $k1, $a1, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac15cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x3AC15C raw=0x73656F64");
    // 0x3ac160: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac160u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC160 raw=0x746F6E20");
    // 0x3ac164: 0x72657420  .word       0x72657420                   # madd1       $t6, $s3, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac164u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3ac168: 0x616e696d  daddi       $t6, $t3, 0x696D
    ctx->pc = 0x3ac168u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x3ac16c: 0xa0d6574  j           func_83595D0
    ctx->pc = 0x3AC16Cu;
    ctx->pc = 0x83595D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595D0u, 0x3AC16Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AC174u;
    // 0x3ac174: 0x0  nop
    ctx->pc = 0x3ac174u;
    // NOP
    // 0x3ac178: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac178u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC178 raw=0x47656373");
    // 0x3ac17c: 0x6e795373  ldr         $t9, 0x5373($s3)
    ctx->pc = 0x3ac17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x3ac180: 0x74615063  .word       0x74615063                   # INVALID     $v1, $at, 0x5063 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac180u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC180 raw=0x74615063");
    // 0x3ac184: 0x56203a68  bnel        $s1, $zero, . + 4 + (0x3A68 << 2)
    ctx->pc = 0x3AC184u;
    {
        const bool branch_taken_0x3ac184 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac184) {
            ctx->pc = 0x3AC188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC184u;
            // 0x3ac188: 0x64203155  daddiu      $zero, $at, 0x3155 (Delay Slot)
            SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12629);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BAB28u;
            return;
        }
    }
    ctx->pc = 0x3AC18Cu;
    // 0x3ac18c: 0x2073656f  addi        $s3, $v1, 0x656F
    ctx->pc = 0x3ac18cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25967, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x3ac190: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x3ac190u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x3ac194: 0x6d726574  ldr         $s2, 0x6574($t3)
    ctx->pc = 0x3ac194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x3ac198: 0x74616e69  .word       0x74616E69                   # INVALID     $v1, $at, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac198u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC198 raw=0x74616E69");
    // 0x3ac19c: 0xa0d65  .word       0x000A0D65                   # or          $at, $zero, $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac19cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x3ac1a0: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac1a0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC1A0 raw=0x47656373");
    // 0x3ac1a4: 0x6e795373  ldr         $t9, 0x5373($s3)
    ctx->pc = 0x3ac1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x3ac1a8: 0x74615063  .word       0x74615063                   # INVALID     $v1, $at, 0x5063 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac1a8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC1A8 raw=0x74615063");
    // 0x3ac1ac: 0x47203a68  .word       0x47203A68                   # INVALID     $t9, $zero, 0x3A68 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac1acu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x28 at 0x3AC1AC raw=0x47203A68");
    // 0x3ac1b0: 0x64204649  daddiu      $zero, $at, 0x4649
    ctx->pc = 0x3ac1b0u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)17993);
    // 0x3ac1b4: 0x2073656f  addi        $s3, $v1, 0x656F
    ctx->pc = 0x3ac1b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25967, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x3ac1b8: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x3ac1b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x3ac1bc: 0x6d726574  ldr         $s2, 0x6574($t3)
    ctx->pc = 0x3ac1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x3ac1c0: 0x74616e69  .word       0x74616E69                   # INVALID     $v1, $at, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac1c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC1C0 raw=0x74616E69");
    // 0x3ac1c4: 0xa0d65  .word       0x000A0D65                   # or          $at, $zero, $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac1c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x3ac1c8: 0x0  nop
    ctx->pc = 0x3ac1c8u;
    // NOP
    // 0x3ac1cc: 0x0  nop
    ctx->pc = 0x3ac1ccu;
    // NOP
    // 0x3ac1d0: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac1d0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC1D0 raw=0x47656373");
    // 0x3ac1d4: 0x74655373  .word       0x74655373                   # INVALID     $v1, $a1, 0x5373 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac1d4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC1D4 raw=0x74655373");
    // 0x3ac1d8: 0x4c666544  .word       0x4C666544                   # INVALID     $v1, $a2, 0x6544 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac1d8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AC1D8 raw=0x4C666544");
    // 0x3ac1dc: 0x4964616f  .word       0x4964616F                   # INVALID     $t3, $a0, 0x616F # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3ac1dcu;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x3AC1DC raw=0x4964616F");
    // 0x3ac1e0: 0x6567616d  daddiu      $a3, $t3, 0x616D
    ctx->pc = 0x3ac1e0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24941);
    // 0x3ac1e4: 0x6f74203a  ldr         $s4, 0x203A($k1)
    ctx->pc = 0x3ac1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x3ac1e8: 0x6962206f  ldl         $v0, 0x206F($t3)
    ctx->pc = 0x3ac1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3ac1ec: 0x69732067  ldl         $s3, 0x2067($t3)
    ctx->pc = 0x3ac1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x3ac1f0: 0xa0d657a  j           func_83595E8
    ctx->pc = 0x3AC1F0u;
    ctx->pc = 0x83595E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595E8u, 0x3AC1F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AC1F8u;
    // 0x3ac1f8: 0x0  nop
    ctx->pc = 0x3ac1f8u;
    // NOP
    // 0x3ac1fc: 0x0  nop
    ctx->pc = 0x3ac1fcu;
    // NOP
    // 0x3ac200: 0x100d2c  .word       0x00100D2C                   # dadd        $at, $zero, $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac204: 0x100d38  dsll        $at, $s0, 20
    ctx->pc = 0x3ac204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) << 20);
    // 0x3ac208: 0x100d4c  .word       0x00100D4C                   # syscall     53 # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac208u;
    ctx->pc = 0x3AC20Cu;
runtime->handleSyscall(rdram, ctx, 0x4035u);
label_3ac20c:
    // 0x3ac20c: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac20cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac210: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac210u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac214: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac214u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac218: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac218u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac21c: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac21cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac220: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac220u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac224: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac224u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac228: 0x100d4c  .word       0x00100D4C                   # syscall     53 # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac228u;
    ctx->pc = 0x3AC22Cu;
runtime->handleSyscall(rdram, ctx, 0x4035u);
label_3ac22c:
    // 0x3ac22c: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac22cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac230: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac230u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac234: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac234u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac238: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac238u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac23c: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac23cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac240: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac240u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac244: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac244u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac248: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac248u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac24c: 0x100d58  .word       0x00100D58                   # mult        $at, $zero, $s0 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ac24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    // 0x3ac250: 0x100d64  .word       0x00100D64                   # and         $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 16));
    // 0x3ac254: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac254u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac258: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac258u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac25c: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac25cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac260: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac260u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac264: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac264u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac268: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac268u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac26c: 0x100d58  .word       0x00100D58                   # mult        $at, $zero, $s0 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ac26cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    // 0x3ac270: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac270u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac274: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac274u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac278: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac278u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac27c: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac27cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac280: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac280u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac284: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac284u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac288: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac288u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac28c: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac28cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac290: 0x100d64  .word       0x00100D64                   # and         $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac290u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 16));
    // 0x3ac294: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac294u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac298: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac298u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac29c: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac29cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2a0: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2a4: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2a8: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2a8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2ac: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2b0: 0x100d64  .word       0x00100D64                   # and         $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 16));
    // 0x3ac2b4: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2b4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2b8: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2b8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2bc: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2bcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2c0: 0x100d2c  .word       0x00100D2C                   # dadd        $at, $zero, $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2c4: 0x100d38  dsll        $at, $s0, 20
    ctx->pc = 0x3ac2c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) << 20);
    // 0x3ac2c8: 0x100d4c  .word       0x00100D4C                   # syscall     53 # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2c8u;
    ctx->pc = 0x3AC2CCu;
runtime->handleSyscall(rdram, ctx, 0x4035u);
label_3ac2cc:
    // 0x3ac2cc: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2ccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2d0: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2d4: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2d8: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2d8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2dc: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2dcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2e0: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2e4: 0x100d6c  .word       0x00100D6C                   # dadd        $at, $zero, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3ac2e8: 0x100d4c  .word       0x00100D4C                   # syscall     53 # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac2e8u;
    ctx->pc = 0x3AC2ECu;
runtime->handleSyscall(rdram, ctx, 0x4035u);
label_3ac2ec:
    // 0x3ac2ec: 0x0  nop
    ctx->pc = 0x3ac2ecu;
    // NOP
    // 0x3ac2f0: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac2f0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC2F0 raw=0x47656373");
    // 0x3ac2f4: 0x65784573  daddiu      $t8, $t3, 0x4573
    ctx->pc = 0x3ac2f4u;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17779);
    // 0x3ac2f8: 0x616f4c63  daddi       $t7, $t3, 0x4C63
    ctx->pc = 0x3ac2f8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19555; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
    // 0x3ac2fc: 0x616d4964  daddi       $t5, $t3, 0x4964
    ctx->pc = 0x3ac2fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18788; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x3ac300: 0x203a6567  addi        $k0, $at, 0x6567
    ctx->pc = 0x3ac300u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25959, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x3ac304: 0x20414d44  addi        $at, $v0, 0x4D44
    ctx->pc = 0x3ac304u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19780, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x3ac308: 0x322e6843  andi        $t6, $s1, 0x6843
    ctx->pc = 0x3ac308u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)26691);
    // 0x3ac30c: 0x656f6420  daddiu      $t7, $t3, 0x6420
    ctx->pc = 0x3ac30cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25632);
    // 0x3ac310: 0x6f6e2073  ldr         $t6, 0x2073($k1)
    ctx->pc = 0x3ac310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x3ac314: 0x65742074  daddiu      $s4, $t3, 0x2074
    ctx->pc = 0x3ac314u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8308);
    // 0x3ac318: 0x6e696d72  ldr         $t1, 0x6D72($s3)
    ctx->pc = 0x3ac318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28018); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3ac31c: 0xd657461  jal         func_595D184
    ctx->pc = 0x3AC31Cu;
    SET_GPR_U32(ctx, 31, 0x3AC324u);
    ctx->pc = 0x3AC320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC31Cu;
    // 0x3ac320: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x595D184u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x595D184u, 0x3AC31Cu, 0x3AC324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC324u;
label_3ac324:
    // 0x3ac324: 0x0  nop
    ctx->pc = 0x3ac324u;
    // NOP
    // 0x3ac328: 0x0  nop
    ctx->pc = 0x3ac328u;
    // NOP
    // 0x3ac32c: 0x0  nop
    ctx->pc = 0x3ac32cu;
    // NOP
    // 0x3ac330: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac330u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC330 raw=0x47656373");
    // 0x3ac334: 0x65784573  daddiu      $t8, $t3, 0x4573
    ctx->pc = 0x3ac334u;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17779);
    // 0x3ac338: 0x6f745363  ldr         $s4, 0x5363($k1)
    ctx->pc = 0x3ac338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21347); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x3ac33c: 0x6d496572  ldr         $t1, 0x6572($t2)
    ctx->pc = 0x3ac33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3ac340: 0x3a656761  xori        $a1, $s3, 0x6761
    ctx->pc = 0x3ac340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26465);
    // 0x3ac344: 0x414d4420  .word       0x414D4420                   # INVALID     $t2, $t5, 0x4420 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ac344u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AC344 raw=0x414D4420");
    // 0x3ac348: 0x2e684320  sltiu       $t0, $s3, 0x4320
    ctx->pc = 0x3ac348u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)17184) ? 1 : 0);
    // 0x3ac34c: 0x6f642031  ldr         $a0, 0x2031($k1)
    ctx->pc = 0x3ac34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8241); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3ac350: 0x6e207365  ldr         $zero, 0x7365($s1)
    ctx->pc = 0x3ac350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3ac354: 0x7420746f  .word       0x7420746F                   # INVALID     $at, $zero, 0x746F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac354u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC354 raw=0x7420746F");
    // 0x3ac358: 0x696d7265  ldl         $t5, 0x7265($t3)
    ctx->pc = 0x3ac358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x3ac35c: 0x6574616e  daddiu      $s4, $t3, 0x616E
    ctx->pc = 0x3ac35cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
    // 0x3ac360: 0xa0d  break       0, 40
    ctx->pc = 0x3ac360u;
    runtime->handleBreak(rdram, ctx);
    // 0x3ac364: 0x0  nop
    ctx->pc = 0x3ac364u;
    // NOP
    // 0x3ac368: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac368u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC368 raw=0x47656373");
    // 0x3ac36c: 0x65784573  daddiu      $t8, $t3, 0x4573
    ctx->pc = 0x3ac36cu;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17779);
    // 0x3ac370: 0x6f745363  ldr         $s4, 0x5363($k1)
    ctx->pc = 0x3ac370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21347); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x3ac374: 0x6d496572  ldr         $t1, 0x6572($t2)
    ctx->pc = 0x3ac374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3ac378: 0x3a656761  xori        $a1, $s3, 0x6761
    ctx->pc = 0x3ac378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26465);
    // 0x3ac37c: 0x20534720  addi        $s3, $v0, 0x4720
    ctx->pc = 0x3ac37cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)18208, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x3ac380: 0x73656f64  .word       0x73656F64                   # INVALID     $k1, $a1, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac380u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x3AC380 raw=0x73656F64");
    // 0x3ac384: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac384u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC384 raw=0x746F6E20");
    // 0x3ac388: 0x72657420  .word       0x72657420                   # madd1       $t6, $s3, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac388u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3ac38c: 0x616e696d  daddi       $t6, $t3, 0x696D
    ctx->pc = 0x3ac38cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x3ac390: 0xa0d6574  j           func_83595D0
    ctx->pc = 0x3AC390u;
    ctx->pc = 0x83595D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595D0u, 0x3AC390u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AC398u;
    // 0x3ac398: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac398u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC398 raw=0x47656373");
    // 0x3ac39c: 0x65784573  daddiu      $t8, $t3, 0x4573
    ctx->pc = 0x3ac39cu;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17779);
    // 0x3ac3a0: 0x6f745363  ldr         $s4, 0x5363($k1)
    ctx->pc = 0x3ac3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21347); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x3ac3a4: 0x6d496572  ldr         $t1, 0x6572($t2)
    ctx->pc = 0x3ac3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3ac3a8: 0x3a656761  xori        $a1, $s3, 0x6761
    ctx->pc = 0x3ac3a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26465);
    // 0x3ac3ac: 0x414d4420  .word       0x414D4420                   # INVALID     $t2, $t5, 0x4420 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ac3acu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AC3AC raw=0x414D4420");
    // 0x3ac3b0: 0x2e684320  sltiu       $t0, $s3, 0x4320
    ctx->pc = 0x3ac3b0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)17184) ? 1 : 0);
    // 0x3ac3b4: 0x47282031  .word       0x47282031                   # INVALID     $t9, $t0, 0x2031 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac3b4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x31 at 0x3AC3B4 raw=0x47282031");
    // 0x3ac3b8: 0x4d3e2d53  .word       0x4D3E2D53                   # INVALID     $t1, $fp, 0x2D53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac3b8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AC3B8 raw=0x4D3E2D53");
    // 0x3ac3bc: 0x20294d45  addi        $t1, $at, 0x4D45
    ctx->pc = 0x3ac3bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)19781, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x3ac3c0: 0x73656f64  .word       0x73656F64                   # INVALID     $k1, $a1, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac3c0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x3AC3C0 raw=0x73656F64");
    // 0x3ac3c4: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac3c4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC3C4 raw=0x746F6E20");
    // 0x3ac3c8: 0x72657420  .word       0x72657420                   # madd1       $t6, $s3, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac3c8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3ac3cc: 0x616e696d  daddi       $t6, $t3, 0x696D
    ctx->pc = 0x3ac3ccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x3ac3d0: 0xa0d6574  j           func_83595D0
    ctx->pc = 0x3AC3D0u;
    ctx->pc = 0x83595D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595D0u, 0x3AC3D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AC3D8u;
    // 0x3ac3d8: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac3d8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x3AC3D8 raw=0x47656373");
    // 0x3ac3dc: 0x65784573  daddiu      $t8, $t3, 0x4573
    ctx->pc = 0x3ac3dcu;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17779);
    // 0x3ac3e0: 0x6f745363  ldr         $s4, 0x5363($k1)
    ctx->pc = 0x3ac3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21347); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x3ac3e4: 0x6d496572  ldr         $t1, 0x6572($t2)
    ctx->pc = 0x3ac3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3ac3e8: 0x3a656761  xori        $a1, $s3, 0x6761
    ctx->pc = 0x3ac3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26465);
    // 0x3ac3ec: 0x6f6e4520  ldr         $t6, 0x4520($k1)
    ctx->pc = 0x3ac3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x3ac3f0: 0x20686775  addi        $t0, $v1, 0x6775
    ctx->pc = 0x3ac3f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26485, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x3ac3f4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x3ac3f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x3ac3f8: 0x656f6420  daddiu      $t7, $t3, 0x6420
    ctx->pc = 0x3ac3f8u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25632);
    // 0x3ac3fc: 0x6f6e2073  ldr         $t6, 0x2073($k1)
    ctx->pc = 0x3ac3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x3ac400: 0x65722074  daddiu      $s2, $t3, 0x2074
    ctx->pc = 0x3ac400u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8308);
    // 0x3ac404: 0x20686361  addi        $t0, $v1, 0x6361
    ctx->pc = 0x3ac404u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25441, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x3ac408: 0x31464956  andi        $a2, $t2, 0x4956
    ctx->pc = 0x3ac408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)18774);
    // 0x3ac40c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3ac40cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x3ac410: 0x101204  .word       0x00101204                   # sllv        $v0, $s0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac414: 0x10123c  dsll32      $v0, $s0, 8
    ctx->pc = 0x3ac414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 8));
    // 0x3ac418: 0x10128c  .word       0x0010128C                   # syscall     74 # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac418u;
    ctx->pc = 0x3AC41Cu;
runtime->handleSyscall(rdram, ctx, 0x404Au);
label_3ac41c:
    // 0x3ac41c: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac420: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac424: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac428: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac42c: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac430: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac434: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac438: 0x10128c  .word       0x0010128C                   # syscall     74 # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac438u;
    ctx->pc = 0x3AC43Cu;
runtime->handleSyscall(rdram, ctx, 0x404Au);
label_3ac43c:
    // 0x3ac43c: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac440: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac444: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac448: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac44c: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac450: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac454: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac458: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac45c: 0x1012c4  .word       0x001012C4                   # sllv        $v0, $s0, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac460: 0x1012f8  dsll        $v0, $s0, 11
    ctx->pc = 0x3ac460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << 11);
    // 0x3ac464: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac468: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac46c: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac470: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac474: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac478: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac47c: 0x1012c4  .word       0x001012C4                   # sllv        $v0, $s0, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac480: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac484: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac488: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac48c: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac490: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac494: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac498: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac49c: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4a0: 0x1012f8  dsll        $v0, $s0, 11
    ctx->pc = 0x3ac4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << 11);
    // 0x3ac4a4: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4a8: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4ac: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4b0: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4b4: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4b8: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4bc: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4c0: 0x1012f8  dsll        $v0, $s0, 11
    ctx->pc = 0x3ac4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << 11);
    // 0x3ac4c4: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4c8: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4cc: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4d0: 0x101204  .word       0x00101204                   # sllv        $v0, $s0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4d4: 0x10123c  dsll32      $v0, $s0, 8
    ctx->pc = 0x3ac4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 8));
    // 0x3ac4d8: 0x10128c  .word       0x0010128C                   # syscall     74 # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4d8u;
    ctx->pc = 0x3AC4DCu;
runtime->handleSyscall(rdram, ctx, 0x404Au);
label_3ac4dc:
    // 0x3ac4dc: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4e0: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4e4: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4e8: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4ec: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4f0: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4f4: 0x101344  .word       0x00101344                   # sllv        $v0, $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac4f8: 0x10128c  .word       0x0010128C                   # syscall     74 # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac4f8u;
    ctx->pc = 0x3AC4FCu;
runtime->handleSyscall(rdram, ctx, 0x404Au);
label_3ac4fc:
    // 0x3ac4fc: 0x0  nop
    ctx->pc = 0x3ac4fcu;
    // NOP
    // 0x3ac500: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x3ac500u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
    // 0x3ac504: 0x203a616d  addi        $k0, $at, 0x616D
    ctx->pc = 0x3ac504u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)24941, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x3ac508: 0x636e7973  daddi       $t6, $k1, 0x7973
    ctx->pc = 0x3ac508u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)31091; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x3ac50c: 0x6d697420  ldr         $t1, 0x7420($t3)
    ctx->pc = 0x3ac50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3ac510: 0x74756f65  .word       0x74756F65                   # INVALID     $v1, $s5, 0x6F65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac510u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC510 raw=0x74756F65");
    // 0x3ac514: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3ac514u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x3ac518: 0x6e655344  ldr         $a1, 0x5344($s3)
    ctx->pc = 0x3ac518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21316); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3ac51c: 0x203a4d64  addi        $k0, $at, 0x4D64
    ctx->pc = 0x3ac51cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)19812, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x3ac520: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x3ac520u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x3ac524: 0x74736e69  .word       0x74736E69                   # INVALID     $v1, $s3, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac524u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC524 raw=0x74736E69");
    // 0x3ac528: 0x656c6c61  daddiu      $t4, $t3, 0x6C61
    ctx->pc = 0x3ac528u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27745);
    // 0x3ac52c: 0x65792064  daddiu      $t9, $t3, 0x2064
    ctx->pc = 0x3ac52cu;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
    // 0x3ac530: 0x73202e74  .word       0x73202E74                   # psllh       $a1, $zero, 25 # 03200000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac530u;
    SET_GPR_VEC(ctx, 5, _mm_slli_epi16(GPR_VEC(ctx, 0), 25));
    // 0x3ac534: 0x7972726f  lq          $s2, 0x726F($t3)
    ctx->pc = 0x3ac534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 29295)));
    // 0x3ac538: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3ac538u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x3ac53c: 0x0  nop
    ctx->pc = 0x3ac53cu;
    // NOP
    // 0x3ac540: 0x6e795344  ldr         $t9, 0x5344($s3)
    ctx->pc = 0x3ac540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21316); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x3ac544: 0x203a4e63  addi        $k0, $at, 0x4E63
    ctx->pc = 0x3ac544u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)20067, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x3ac548: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x3ac548u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x3ac54c: 0x74736e69  .word       0x74736E69                   # INVALID     $v1, $s3, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac54cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC54C raw=0x74736E69");
    // 0x3ac550: 0x656c6c61  daddiu      $t4, $t3, 0x6C61
    ctx->pc = 0x3ac550u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27745);
    // 0x3ac554: 0x65792064  daddiu      $t9, $t3, 0x2064
    ctx->pc = 0x3ac554u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
    // 0x3ac558: 0x73202e74  .word       0x73202E74                   # psllh       $a1, $zero, 25 # 03200000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac558u;
    SET_GPR_VEC(ctx, 5, _mm_slli_epi16(GPR_VEC(ctx, 0), 25));
    // 0x3ac55c: 0x7972726f  lq          $s2, 0x726F($t3)
    ctx->pc = 0x3ac55cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 29295)));
    // 0x3ac560: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3ac560u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x3ac564: 0x0  nop
    ctx->pc = 0x3ac564u;
    // NOP
    // 0x3ac568: 0x73614c44  .word       0x73614C44                   # plzcw       $t1, $k1 # 00010440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac568u;
    { uint64_t v = GPR_U64(ctx, 27); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 9, out); }
    // 0x3ac56c: 0x6e795374  ldr         $t9, 0x5374($s3)
    ctx->pc = 0x3ac56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21364); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x3ac570: 0x6d695463  ldr         $t1, 0x5463($t3)
    ctx->pc = 0x3ac570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 21603); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3ac574: 0x6e203a65  ldr         $zero, 0x3A65($s1)
    ctx->pc = 0x3ac574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14949); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3ac578: 0x6920746f  ldl         $zero, 0x746F($t1)
    ctx->pc = 0x3ac578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x3ac57c: 0x6174736e  daddi       $s4, $t3, 0x736E
    ctx->pc = 0x3ac57cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29550; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x3ac580: 0x64656c6c  daddiu      $a1, $v1, 0x6C6C
    ctx->pc = 0x3ac580u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27756);
    // 0x3ac584: 0x74657920  .word       0x74657920                   # INVALID     $v1, $a1, 0x7920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac584u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC584 raw=0x74657920");
    // 0x3ac588: 0x6f73202e  ldr         $s3, 0x202E($k1)
    ctx->pc = 0x3ac588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8238); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x3ac58c: 0xa797272  j           func_9E5C9C8
    ctx->pc = 0x3AC58Cu;
    ctx->pc = 0x9E5C9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9E5C9C8u, 0x3AC58Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AC594u;
    // 0x3ac594: 0x0  nop
    ctx->pc = 0x3ac594u;
    // NOP
    // 0x3ac598: 0x6c614344  ldr         $at, 0x4344($v1)
    ctx->pc = 0x3ac598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 17220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x3ac59c: 0x6361626c  daddi       $at, $k1, 0x626C
    ctx->pc = 0x3ac59cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25196; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
    // 0x3ac5a0: 0x6e203a6b  ldr         $zero, 0x3A6B($s1)
    ctx->pc = 0x3ac5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14955); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3ac5a4: 0x6920746f  ldl         $zero, 0x746F($t1)
    ctx->pc = 0x3ac5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x3ac5a8: 0x6174736e  daddi       $s4, $t3, 0x736E
    ctx->pc = 0x3ac5a8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29550; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x3ac5ac: 0x64656c6c  daddiu      $a1, $v1, 0x6C6C
    ctx->pc = 0x3ac5acu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27756);
    // 0x3ac5b0: 0x74657920  .word       0x74657920                   # INVALID     $v1, $a1, 0x7920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac5b0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC5B0 raw=0x74657920");
    // 0x3ac5b4: 0x6f73202e  ldr         $s3, 0x202E($k1)
    ctx->pc = 0x3ac5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8238); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x3ac5b8: 0xa797272  j           func_9E5C9C8
    ctx->pc = 0x3AC5B8u;
    ctx->pc = 0x9E5C9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9E5C9C8u, 0x3AC5B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AC5C0u;
    // 0x3ac5c0: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x3ac5c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x3ac5c4: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x3ac5c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ac5c8: 0x69646f6d  ldl         $a0, 0x6F6D($t3)
    ctx->pc = 0x3ac5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3ac5cc: 0x74206e6f  .word       0x74206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac5ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC5CC raw=0x74206E6F");
    // 0x3ac5d0: 0x20657079  addi        $a1, $v1, 0x7079
    ctx->pc = 0x3ac5d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x3ac5d4: 0x69202d2d  ldl         $zero, 0x2D2D($t1)
    ctx->pc = 0x3ac5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11565); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x3ac5d8: 0x726f6e67  .word       0x726F6E67                   # INVALID     $s3, $t7, 0x6E67 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac5d8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x3AC5D8 raw=0x726F6E67");
    // 0x3ac5dc: 0x25286465  addiu       $t0, $t1, 0x6465
    ctx->pc = 0x3ac5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 25701));
    // 0x3ac5e0: 0x2964  .word       0x00002964                   # and         $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x3ac5e4: 0x0  nop
    ctx->pc = 0x3ac5e4u;
    // NOP
    // 0x3ac5e8: 0x20296128  addi        $t1, $at, 0x6128
    ctx->pc = 0x3ac5e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)24872, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x3ac5ec: 0x61766e69  daddi       $s6, $t3, 0x6E69
    ctx->pc = 0x3ac5ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x3ac5f0: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x3ac5f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ac5f4: 0x69746f6d  ldl         $s4, 0x6F6D($t3)
    ctx->pc = 0x3ac5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x3ac5f8: 0x745f6e6f  .word       0x745F6E6F                   # INVALID     $v0, $ra, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac5f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC5F8 raw=0x745F6E6F");
    // 0x3ac5fc: 0x28657079  slti        $a1, $v1, 0x7079
    ctx->pc = 0x3ac5fcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28793) ? 1 : 0);
    // 0x3ac600: 0x2d296425  sltiu       $t1, $t1, 0x6425
    ctx->pc = 0x3ac600u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25637) ? 1 : 0);
    // 0x3ac604: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x3ac604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x3ac608: 0x20296228  addi        $t1, $at, 0x6228
    ctx->pc = 0x3ac608u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25128, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x3ac60c: 0x61766e69  daddi       $s6, $t3, 0x6E69
    ctx->pc = 0x3ac60cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x3ac610: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x3ac610u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ac614: 0x69746f6d  ldl         $s4, 0x6F6D($t3)
    ctx->pc = 0x3ac614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x3ac618: 0x745f6e6f  .word       0x745F6E6F                   # INVALID     $v0, $ra, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac618u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC618 raw=0x745F6E6F");
    // 0x3ac61c: 0x28657079  slti        $a1, $v1, 0x7079
    ctx->pc = 0x3ac61cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28793) ? 1 : 0);
    // 0x3ac620: 0x2d296425  sltiu       $t1, $t1, 0x6425
    ctx->pc = 0x3ac620u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25637) ? 1 : 0);
    // 0x3ac624: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x3ac624u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x3ac628: 0x20296328  addi        $t1, $at, 0x6328
    ctx->pc = 0x3ac628u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25384, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x3ac62c: 0x61766e69  daddi       $s6, $t3, 0x6E69
    ctx->pc = 0x3ac62cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x3ac630: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x3ac630u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ac634: 0x69746f6d  ldl         $s4, 0x6F6D($t3)
    ctx->pc = 0x3ac634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x3ac638: 0x745f6e6f  .word       0x745F6E6F                   # INVALID     $v0, $ra, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac638u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC638 raw=0x745F6E6F");
    // 0x3ac63c: 0x28657079  slti        $a1, $v1, 0x7079
    ctx->pc = 0x3ac63cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28793) ? 1 : 0);
    // 0x3ac640: 0x2d296425  sltiu       $t1, $t1, 0x6425
    ctx->pc = 0x3ac640u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25637) ? 1 : 0);
    // 0x3ac644: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x3ac644u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x3ac648: 0x72746e69  .word       0x72746E69                   # INVALID     $s3, $s4, 0x6E69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x3ac648u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x19 at 0x3AC648 raw=0x72746E69");
    // 0x3ac64c: 0x26262061  addiu       $a2, $s1, 0x2061
    ctx->pc = 0x3ac64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8289));
    // 0x3ac650: 0x696b7320  ldl         $t3, 0x7320($t3)
    ctx->pc = 0x3ac650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3ac654: 0x424d2070  .word       0x424D2070                   # INVALID     $s2, $t5, 0x2070 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ac654u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AC654 raw=0x424D2070");
    // 0x3ac658: 0x0  nop
    ctx->pc = 0x3ac658u;
    // NOP
    // 0x3ac65c: 0x0  nop
    ctx->pc = 0x3ac65cu;
    // NOP
    // 0x3ac660: 0x6f727245  ldr         $s2, 0x7245($k1)
    ctx->pc = 0x3ac660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x3ac664: 0x6f632072  ldr         $v1, 0x2072($k1)
    ctx->pc = 0x3ac664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3ac668: 0x64206564  daddiu      $zero, $at, 0x6564
    ctx->pc = 0x3ac668u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)25956);
    // 0x3ac66c: 0x63657465  daddi       $a1, $k1, 0x7465
    ctx->pc = 0x3ac66cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29797; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x3ac670: 0x28646574  slti        $a0, $v1, 0x6574
    ctx->pc = 0x3ac670u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25972) ? 1 : 0);
    // 0x3ac674: 0x43454442  .word       0x43454442                   # INVALID     $k0, $a1, 0x4442 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ac674u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AC674 raw=0x43454442");
    // 0x3ac678: 0x29  mtsa        $zero
    ctx->pc = 0x3ac678u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x3ac67c: 0x0  nop
    ctx->pc = 0x3ac67cu;
    // NOP
    // 0x3ac680: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x3ac680u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x3ac684: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x3ac684u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ac688: 0x7263616d  .word       0x7263616D                   # INVALID     $s3, $v1, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac688u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x3AC688 raw=0x7263616D");
    // 0x3ac68c: 0x6f6c626f  ldr         $t4, 0x626F($k1)
    ctx->pc = 0x3ac68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3ac690: 0x615f6b63  daddi       $ra, $t2, 0x6B63
    ctx->pc = 0x3ac690u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)27491; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x3ac694: 0x65726464  daddiu      $s2, $t3, 0x6464
    ctx->pc = 0x3ac694u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25700);
    // 0x3ac698: 0x695f7373  ldl         $ra, 0x7373($t2)
    ctx->pc = 0x3ac698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 29555); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
    // 0x3ac69c: 0x6572636e  daddiu      $s2, $t3, 0x636E
    ctx->pc = 0x3ac69cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25454);
    // 0x3ac6a0: 0x746e656d  .word       0x746E656D                   # INVALID     $v1, $t6, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac6a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC6A0 raw=0x746E656D");
    // 0x3ac6a4: 0x646f6320  daddiu      $t7, $v1, 0x6320
    ctx->pc = 0x3ac6a4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25376);
    // 0x3ac6a8: 0x78302865  lq          $s0, 0x2865($at)
    ctx->pc = 0x3ac6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 1), 10341)));
    // 0x3ac6ac: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x3ac6acu;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
    // 0x3ac6b0: 0x29  mtsa        $zero
    ctx->pc = 0x3ac6b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x3ac6b4: 0x0  nop
    ctx->pc = 0x3ac6b4u;
    // NOP
    // 0x3ac6b8: 0x6b53203d  ldl         $s3, 0x203D($k0)
    ctx->pc = 0x3ac6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x3ac6bc: 0x74207069  .word       0x74207069                   # INVALID     $at, $zero, 0x7069 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac6bcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC6BC raw=0x74207069");
    // 0x3ac6c0: 0x6874206f  ldl         $s4, 0x206F($v1)
    ctx->pc = 0x3ac6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x3ac6c4: 0x656e2065  daddiu      $t6, $t3, 0x2065
    ctx->pc = 0x3ac6c4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8293);
    // 0x3ac6c8: 0x70207478  .word       0x70207478                   # INVALID     $at, $zero, 0x7478 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac6c8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x3AC6C8 raw=0x70207478");
    // 0x3ac6cc: 0x75746369  .word       0x75746369                   # INVALID     $t3, $s4, 0x6369 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac6ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC6CC raw=0x75746369");
    // 0x3ac6d0: 0x3d206572  .word       0x3D206572                   # lui         $zero, 0x6572 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac6d0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)25970 << 16));
    // 0x3ac6d4: 0x0  nop
    ctx->pc = 0x3ac6d4u;
    // NOP
    // 0x3ac6d8: 0x63696c73  daddi       $t1, $k1, 0x6C73
    ctx->pc = 0x3ac6d8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27763; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x3ac6dc: 0x74735f65  .word       0x74735F65                   # INVALID     $v1, $s3, 0x5F65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac6dcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC6DC raw=0x74735F65");
    // 0x3ac6e0: 0x5f747261  .word       0x5F747261                   # bgtzl       $k1, . + 4 + (0x7261 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AC6E0u;
    {
        const bool branch_taken_0x3ac6e0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3ac6e0) {
            ctx->pc = 0x3AC6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC6E0u;
            // 0x3ac6e4: 0x65646f63  daddiu      $a0, $t3, 0x6F63 (Delay Slot)
            SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9068u;
            return;
        }
    }
    ctx->pc = 0x3AC6E8u;
    // 0x3ac6e8: 0x25783028  addiu       $t8, $t3, 0x3028
    ctx->pc = 0x3ac6e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 12328));
    // 0x3ac6ec: 0x29783830  slti        $t8, $t3, 0x3830
    ctx->pc = 0x3ac6ecu;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)14384) ? 1 : 0);
    // 0x3ac6f0: 0x74756f20  .word       0x74756F20                   # INVALID     $v1, $s5, 0x6F20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac6f0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC6F0 raw=0x74756F20");
    // 0x3ac6f4: 0x20666f20  addi        $a2, $v1, 0x6F20
    ctx->pc = 0x3ac6f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x3ac6f8: 0x676e6172  daddiu      $t6, $k1, 0x6172
    ctx->pc = 0x3ac6f8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24946);
    // 0x3ac6fc: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac6fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x3ac700: 0x696c735f  ldl         $t4, 0x735F($t3)
    ctx->pc = 0x3ac700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3ac704: 0x30416563  andi        $at, $v0, 0x6563
    ctx->pc = 0x3ac704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)25955);
    // 0x3ac708: 0x203a2928  addi        $k0, $at, 0x2928
    ctx->pc = 0x3ac708u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10536, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x3ac70c: 0x6f727265  ldr         $s2, 0x7265($k1)
    ctx->pc = 0x3ac70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x3ac710: 0x61682072  daddi       $t0, $t3, 0x2072
    ctx->pc = 0x3ac710u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8306; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x3ac714: 0x6e657070  ldr         $a1, 0x7070($s3)
    ctx->pc = 0x3ac714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28784); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3ac718: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x3ac718u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x3ac71c: 0x0  nop
    ctx->pc = 0x3ac71cu;
    // NOP
    // 0x3ac720: 0x206f6f54  addi        $t7, $v1, 0x6F54
    ctx->pc = 0x3ac720u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28500, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x3ac724: 0x796e616d  lq          $t6, 0x616D($t3)
    ctx->pc = 0x3ac724u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 11), 24941)));
    // 0x3ac728: 0x63616d20  daddi       $at, $k1, 0x6D20
    ctx->pc = 0x3ac728u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27936; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
    // 0x3ac72c: 0x6c626f72  ldr         $v0, 0x6F72($v1)
    ctx->pc = 0x3ac72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3ac730: 0x736b636f  .word       0x736B636F                   # INVALID     $k1, $t3, 0x636F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac730u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3AC730 raw=0x736B636F");
    // 0x3ac734: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x3ac734u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x3ac738: 0x74636970  .word       0x74636970                   # INVALID     $v1, $v1, 0x6970 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac738u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC738 raw=0x74636970");
    // 0x3ac73c: 0x657275  .word       0x00657275                   # INVALID     $v1, $a1, 0x7275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac73cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x3AC73C raw=0x00657275");
    // 0x3ac740: 0x70696b73  .word       0x70696B73                   # INVALID     $v1, $t1, 0x6B73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac740u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3AC740 raw=0x70696B73");
    // 0x3ac744: 0x6d206465  ldr         $zero, 0x6465($t1)
    ctx->pc = 0x3ac744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25701); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3ac748: 0x6f726361  ldr         $s2, 0x6361($k1)
    ctx->pc = 0x3ac748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x3ac74c: 0x636f6c62  daddi       $t7, $k1, 0x6C62
    ctx->pc = 0x3ac74cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27746; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
    // 0x3ac750: 0x6e69206b  ldr         $t1, 0x206B($s3)
    ctx->pc = 0x3ac750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3ac754: 0x70204920  .word       0x70204920                   # madd1       $t1, $at, $zero # 00000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac754u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3ac758: 0x72756369  .word       0x72756369                   # pdivuw      $s3, $s5 # 00006000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x3ac758u;
    { uint32_t rs0 = GPR_U32(ctx, 19); uint32_t rt0 = GPR_U32(ctx, 21); 
   if (rt0 != 0) { ctx->lo = rs0 / rt0; ctx->hi = rs0 % rt0; } 
   else { ctx->lo = 0xFFFFFFFF; ctx->hi = rs0; } 
   SET_GPR_U32(ctx, 12, ctx->lo); }
    // 0x3ac75c: 0x73692065  .word       0x73692065                   # INVALID     $k1, $t1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac75cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x3AC75C raw=0x73692065");
    // 0x3ac760: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac760u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC760 raw=0x746F6E20");
    // 0x3ac764: 0x6c6c6120  ldr         $t4, 0x6120($v1)
    ctx->pc = 0x3ac764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24864); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3ac768: 0x6465776f  daddiu      $a1, $v1, 0x776F
    ctx->pc = 0x3ac768u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30575);
    // 0x3ac76c: 0x0  nop
    ctx->pc = 0x3ac76cu;
    // NOP
    // 0x3ac770: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x3ac770u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x3ac774: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x3ac774u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ac778: 0x7263616d  .word       0x7263616D                   # INVALID     $s3, $v1, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac778u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x3AC778 raw=0x7263616D");
    // 0x3ac77c: 0x6f6c626f  ldr         $t4, 0x626F($k1)
    ctx->pc = 0x3ac77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3ac780: 0x745f6b63  .word       0x745F6B63                   # INVALID     $v0, $ra, 0x6B63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac780u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC780 raw=0x745F6B63");
    // 0x3ac784: 0x20657079  addi        $a1, $v1, 0x7079
    ctx->pc = 0x3ac784u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x3ac788: 0x65646f63  daddiu      $a0, $t3, 0x6F63
    ctx->pc = 0x3ac788u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
    // 0x3ac78c: 0x30203a  .word       0x0030203A                   # dsrl        $a0, $s0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 0);
    // 0x3ac790: 0x64616f6c  daddiu      $at, $v1, 0x6F6C
    ctx->pc = 0x3ac790u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
    // 0x3ac794: 0x7268635f  .word       0x7268635F                   # INVALID     $s3, $t0, 0x635F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac794u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x3AC794 raw=0x7268635F");
    // 0x3ac798: 0x5f616d6f  .word       0x5F616D6F                   # bgtzl       $k1, . + 4 + (0x6D6F << 2) # 00010000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AC798u;
    {
        const bool branch_taken_0x3ac798 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3ac798) {
            ctx->pc = 0x3AC79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC798u;
            // 0x3ac79c: 0x72746e69  .word       0x72746E69                   # INVALID     $s3, $s4, 0x6E69 # 00000000 <InstrIdType: R5900_MMI_3> (Delay Slot)
            throw std::runtime_error("Unhandled MMI3 instruction: function 0x19 at 0x3AC79C raw=0x72746E69");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7D58u;
            return;
        }
    }
    ctx->pc = 0x3AC7A0u;
    // 0x3ac7a0: 0x75715f61  .word       0x75715F61                   # INVALID     $t3, $s1, 0x5F61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac7a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC7A0 raw=0x75715F61");
    // 0x3ac7a4: 0x69746e61  ldl         $s4, 0x6E61($t3)
    ctx->pc = 0x3ac7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x3ac7a8: 0x5f72657a  .word       0x5F72657A                   # bgtzl       $k1, . + 4 + (0x657A << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AC7A8u;
    {
        const bool branch_taken_0x3ac7a8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3ac7a8) {
            ctx->pc = 0x3AC7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC7A8u;
            // 0x3ac7ac: 0x7274616d  .word       0x7274616D                   # INVALID     $s3, $s4, 0x616D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x3AC7AC raw=0x7274616D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5D94u;
            return;
        }
    }
    ctx->pc = 0x3AC7B0u;
    // 0x3ac7b0: 0x3d207869  .word       0x3D207869                   # lui         $zero, 0x7869 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac7b0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)30825 << 16));
    // 0x3ac7b4: 0x31203d  .word       0x0031203D                   # INVALID     $at, $s1, 0x203D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac7b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3AC7B4 raw=0x0031203D");
    // 0x3ac7b8: 0x64616f6c  daddiu      $at, $v1, 0x6F6C
    ctx->pc = 0x3ac7b8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
    // 0x3ac7bc: 0x7268635f  .word       0x7268635F                   # INVALID     $s3, $t0, 0x635F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac7bcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x3AC7BC raw=0x7268635F");
    // 0x3ac7c0: 0x5f616d6f  .word       0x5F616D6F                   # bgtzl       $k1, . + 4 + (0x6D6F << 2) # 00010000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AC7C0u;
    {
        const bool branch_taken_0x3ac7c0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3ac7c0) {
            ctx->pc = 0x3AC7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC7C0u;
            // 0x3ac7c4: 0x5f6e6f6e  .word       0x5F6E6F6E                   # bgtzl       $k1, . + 4 + (0x6F6E << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x3AC7C4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7D80u;
            return;
        }
    }
    ctx->pc = 0x3AC7C8u;
    // 0x3ac7c8: 0x72746e69  .word       0x72746E69                   # INVALID     $s3, $s4, 0x6E69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x3ac7c8u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x19 at 0x3AC7C8 raw=0x72746E69");
    // 0x3ac7cc: 0x75715f61  .word       0x75715F61                   # INVALID     $t3, $s1, 0x5F61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac7ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC7CC raw=0x75715F61");
    // 0x3ac7d0: 0x69746e61  ldl         $s4, 0x6E61($t3)
    ctx->pc = 0x3ac7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x3ac7d4: 0x5f72657a  .word       0x5F72657A                   # bgtzl       $k1, . + 4 + (0x657A << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AC7D4u;
    {
        const bool branch_taken_0x3ac7d4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3ac7d4) {
            ctx->pc = 0x3AC7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC7D4u;
            // 0x3ac7d8: 0x7274616d  .word       0x7274616D                   # INVALID     $s3, $s4, 0x616D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x3AC7D8 raw=0x7274616D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5DC0u;
            return;
        }
    }
    ctx->pc = 0x3AC7DCu;
    // 0x3ac7dc: 0x3d207869  .word       0x3D207869                   # lui         $zero, 0x7869 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac7dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)30825 << 16));
    // 0x3ac7e0: 0x31203d  .word       0x0031203D                   # INVALID     $at, $s1, 0x203D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac7e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3AC7E0 raw=0x0031203D");
    // 0x3ac7e4: 0x0  nop
    ctx->pc = 0x3ac7e4u;
    // NOP
    // 0x3ac7e8: 0x2064646f  addi        $a0, $v1, 0x646F
    ctx->pc = 0x3ac7e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25711, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ac7ec: 0x626d756e  daddi       $t5, $s3, 0x756E
    ctx->pc = 0x3ac7ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)30062; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x3ac7f0: 0x6f207265  ldr         $zero, 0x7265($t9)
    ctx->pc = 0x3ac7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3ac7f4: 0x69662066  ldl         $a2, 0x2066($t3)
    ctx->pc = 0x3ac7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8294); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3ac7f8: 0x20646c65  addi        $a0, $v1, 0x6C65
    ctx->pc = 0x3ac7f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27749, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ac7fc: 0x74636970  .word       0x74636970                   # INVALID     $v1, $v1, 0x6970 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac7fcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC7FC raw=0x74636970");
    // 0x3ac800: 0x73657275  .word       0x73657275                   # INVALID     $k1, $a1, 0x7275 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac800u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3AC800 raw=0x73657275");
    // 0x3ac804: 0x0  nop
    ctx->pc = 0x3ac804u;
    // NOP
    // 0x3ac808: 0x6e6b6e75  ldr         $t3, 0x6E75($s3)
    ctx->pc = 0x3ac808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28277); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3ac80c: 0x206e776f  addi        $t6, $v1, 0x776F
    ctx->pc = 0x3ac80cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30575, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x3ac810: 0x74636970  .word       0x74636970                   # INVALID     $v1, $v1, 0x6970 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac810u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC810 raw=0x74636970");
    // 0x3ac814: 0x20657275  addi        $a1, $v1, 0x7275
    ctx->pc = 0x3ac814u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29301, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x3ac818: 0x72747573  .word       0x72747573                   # INVALID     $s3, $s4, 0x7573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac818u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3AC818 raw=0x72747573");
    // 0x3ac81c: 0x75746375  .word       0x75746375                   # INVALID     $t3, $s4, 0x6375 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac81cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC81C raw=0x75746375");
    // 0x3ac820: 0x6572  tlt         $zero, $zero, 405
    ctx->pc = 0x3ac820u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x3ac824: 0x0  nop
    ctx->pc = 0x3ac824u;
    // NOP
    // 0x3ac828: 0x206f6f54  addi        $t7, $v1, 0x6F54
    ctx->pc = 0x3ac828u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28500, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x3ac82c: 0x6c616d73  ldr         $at, 0x6D73($v1)
    ctx->pc = 0x3ac82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28019); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x3ac830: 0x7562206c  .word       0x7562206C                   # INVALID     $t3, $v0, 0x206C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac830u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC830 raw=0x7562206C");
    // 0x3ac834: 0x72656666  .word       0x72656666                   # INVALID     $s3, $a1, 0x6666 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac834u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x3AC834 raw=0x72656666");
    // 0x3ac838: 0x7a697320  lq          $t1, 0x7320($s3)
    ctx->pc = 0x3ac838u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 29472)));
    // 0x3ac83c: 0x6f662065  ldr         $a2, 0x2065($k1)
    ctx->pc = 0x3ac83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3ac840: 0x64252072  daddiu      $a1, $at, 0x2072
    ctx->pc = 0x3ac840u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)8306);
    // 0x3ac844: 0x20642578  addi        $a0, $v1, 0x2578
    ctx->pc = 0x3ac844u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9592, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ac848: 0x74636970  .word       0x74636970                   # INVALID     $v1, $v1, 0x6970 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac848u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC848 raw=0x74636970");
    // 0x3ac84c: 0xa657275  j           func_995C9D4
    ctx->pc = 0x3AC84Cu;
    ctx->pc = 0x995C9D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x995C9D4u, 0x3AC84Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AC854u;
    // 0x3ac854: 0x0  nop
    ctx->pc = 0x3ac854u;
    // NOP
    // 0x3ac858: 0x20435343  addi        $v1, $v0, 0x5343
    ctx->pc = 0x3ac858u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)21315, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x3ac85c: 0x646e6168  daddiu      $t6, $v1, 0x6168
    ctx->pc = 0x3ac85cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24936);
    // 0x3ac860: 0x2072656c  addi        $s2, $v1, 0x656C
    ctx->pc = 0x3ac860u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25964, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x3ac864: 0x6f727265  ldr         $s2, 0x7265($k1)
    ctx->pc = 0x3ac864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x3ac868: 0xa72  tlt         $zero, $zero, 41
    ctx->pc = 0x3ac868u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x3ac86c: 0x0  nop
    ctx->pc = 0x3ac86cu;
    // NOP
    // 0x3ac870: 0x6b636170  ldl         $v1, 0x6170($k1)
    ctx->pc = 0x3ac870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24944); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3ac874: 0x6165685f  daddi       $a1, $t3, 0x685F
    ctx->pc = 0x3ac874u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26719; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x3ac878: 0x5f726564  .word       0x5F726564                   # bgtzl       $k1, . + 4 + (0x6564 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AC878u;
    {
        const bool branch_taken_0x3ac878 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3ac878) {
            ctx->pc = 0x3AC87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC878u;
            // 0x3ac87c: 0x6c656966  ldr         $a1, 0x6966($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5E0Cu;
            return;
        }
    }
    ctx->pc = 0x3AC880u;
    // 0x3ac880: 0x6c665f64  ldr         $a2, 0x5F64($v1)
    ctx->pc = 0x3ac880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3ac884: 0x6e206761  ldr         $zero, 0x6761($s1)
    ctx->pc = 0x3ac884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 26465); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3ac888: 0x73646565  .word       0x73646565                   # INVALID     $k1, $a0, 0x6565 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac888u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x3AC888 raw=0x73646565");
    // 0x3ac88c: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x3ac88cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x3ac890: 0x27206562  addiu       $zero, $t9, 0x6562
    ctx->pc = 0x3ac890u;
    // NOP (addiu $zero, ...)
    // 0x3ac894: 0x69202730  ldl         $zero, 0x2730($t1)
    ctx->pc = 0x3ac894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 10032); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x3ac898: 0x5350206e  beql        $k0, $s0, . + 4 + (0x206E << 2)
    ctx->pc = 0x3AC898u;
    {
        const bool branch_taken_0x3ac898 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ac898) {
            ctx->pc = 0x3AC89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC898u;
            // 0x3ac89c: 0xa  movz        $zero, $zero, $zero (Delay Slot)
            if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4A54u;
            return;
        }
    }
    ctx->pc = 0x3AC8A0u;
    // 0x3ac8a0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x3ac8a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x3ac8a4: 0x657a6973  daddiu      $k0, $t3, 0x6973
    ctx->pc = 0x3ac8a4u;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
    // 0x3ac8a8: 0x20666f20  addi        $a2, $v1, 0x6F20
    ctx->pc = 0x3ac8a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x3ac8ac: 0x6b726f77  ldl         $s2, 0x6F77($k1)
    ctx->pc = 0x3ac8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x3ac8b0: 0x65726120  daddiu      $s2, $t3, 0x6120
    ctx->pc = 0x3ac8b0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24864);
    // 0x3ac8b4: 0x73692061  .word       0x73692061                   # maddu1      $a0, $k1, $t1 # 00000040 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac8b4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ac8b8: 0x6f6f7420  ldr         $t7, 0x7420($k1)
    ctx->pc = 0x3ac8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x3ac8bc: 0x616d7320  daddi       $t5, $t3, 0x7320
    ctx->pc = 0x3ac8bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29472; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x3ac8c0: 0x6c6c  .word       0x00006C6C                   # dadd        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac8c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
    // 0x3ac8c4: 0x0  nop
    ctx->pc = 0x3ac8c4u;
    // NOP
    // 0x3ac8c8: 0x6b726f77  ldl         $s2, 0x6F77($k1)
    ctx->pc = 0x3ac8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x3ac8cc: 0x65726120  daddiu      $s2, $t3, 0x6120
    ctx->pc = 0x3ac8ccu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24864);
    // 0x3ac8d0: 0x69732061  ldl         $s3, 0x2061($t3)
    ctx->pc = 0x3ac8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x3ac8d4: 0x6920657a  ldl         $zero, 0x657A($t1)
    ctx->pc = 0x3ac8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25978); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x3ac8d8: 0x6f742073  ldr         $s4, 0x2073($k1)
    ctx->pc = 0x3ac8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x3ac8dc: 0x6d73206f  ldr         $s3, 0x206F($t3)
    ctx->pc = 0x3ac8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x3ac8e0: 0x6c6c61  .word       0x006C6C61                   # addu        $t5, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac8e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3ac8e4: 0x0  nop
    ctx->pc = 0x3ac8e4u;
    // NOP
    // 0x3ac8e8: 0x67616d69  daddiu      $at, $k1, 0x6D69
    ctx->pc = 0x3ac8e8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28009);
    // 0x3ac8ec: 0x75622065  .word       0x75622065                   # INVALID     $t3, $v0, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac8ecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC8EC raw=0x75622065");
    // 0x3ac8f0: 0x72656666  .word       0x72656666                   # INVALID     $s3, $a1, 0x6666 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac8f0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x3AC8F0 raw=0x72656666");
    // 0x3ac8f4: 0x65656e20  daddiu      $a1, $t3, 0x6E20
    ctx->pc = 0x3ac8f4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28192);
    // 0x3ac8f8: 0x74207364  .word       0x74207364                   # INVALID     $at, $zero, 0x7364 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac8f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC8F8 raw=0x74207364");
    // 0x3ac8fc: 0x6562206f  daddiu      $v0, $t3, 0x206F
    ctx->pc = 0x3ac8fcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8303);
    // 0x3ac900: 0x696c6120  ldl         $t4, 0x6120($t3)
    ctx->pc = 0x3ac900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24864); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3ac904: 0x64656e67  daddiu      $a1, $v1, 0x6E67
    ctx->pc = 0x3ac904u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28263);
    // 0x3ac908: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x3ac908u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x3ac90c: 0x79623436  lq          $v0, 0x3436($t3)
    ctx->pc = 0x3ac90cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 13366)));
    // 0x3ac910: 0x62206574  daddi       $zero, $s1, 0x6574
    ctx->pc = 0x3ac910u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)25972; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x3ac914: 0x646e756f  daddiu      $t6, $v1, 0x756F
    ctx->pc = 0x3ac914u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30063);
    // 0x3ac918: 0x28797261  slti        $t9, $v1, 0x7261
    ctx->pc = 0x3ac918u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29281) ? 1 : 0);
    // 0x3ac91c: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x3ac91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
    // 0x3ac920: 0x297838  .word       0x00297838                   # dsll        $t7, $t1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac920u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) << 0);
    // 0x3ac924: 0x0  nop
    ctx->pc = 0x3ac924u;
    // NOP
    // 0x3ac928: 0x0  nop
    ctx->pc = 0x3ac928u;
    // NOP
    // 0x3ac92c: 0x0  nop
    ctx->pc = 0x3ac92cu;
    // NOP
    // 0x3ac930: 0x10a6dc  .word       0x0010A6DC                   # dmult       $zero, $s0 # 0000A6C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac930u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AC930 raw=0x0010A6DC");
    // 0x3ac934: 0x10a6f0  tge         $zero, $s0, 667
    ctx->pc = 0x3ac934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x3ac938: 0x10a720  .word       0x0010A720                   # add         $s4, $zero, $s0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac938u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x3ac93c: 0x10a744  .word       0x0010A744                   # sllv        $s4, $s0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac93cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac940: 0x10a744  .word       0x0010A744                   # sllv        $s4, $s0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac940u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
    // 0x3ac944: 0x0  nop
    ctx->pc = 0x3ac944u;
    // NOP
    // 0x3ac948: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x3ac948u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x3ac94c: 0x6f636573  ldr         $v1, 0x6573($k1)
    ctx->pc = 0x3ac94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3ac950: 0x6620646e  daddiu      $zero, $s1, 0x646E
    ctx->pc = 0x3ac950u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25710);
    // 0x3ac954: 0x646c6569  daddiu      $t4, $v1, 0x6569
    ctx->pc = 0x3ac954u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25961);
    // 0x3ac958: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x3ac958u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x3ac95c: 0x7373696d  .word       0x7373696D                   # INVALID     $k1, $s3, 0x696D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac95cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x3AC95C raw=0x7373696D");
    // 0x3ac960: 0x676e69  .word       0x00676E69                   # mtsa        $v1 # 00076E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ac960u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    // 0x3ac964: 0x0  nop
    ctx->pc = 0x3ac964u;
    // NOP
    // 0x3ac968: 0x45504d5b  .word       0x45504D5B                   # INVALID     $t2, $s0, 0x4D5B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ac968u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x1B at 0x3AC968 raw=0x45504D5B");
    // 0x3ac96c: 0x52452047  beql        $s2, $a1, . + 4 + (0x2047 << 2)
    ctx->pc = 0x3AC96Cu;
    {
        const bool branch_taken_0x3ac96c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x3ac96c) {
            ctx->pc = 0x3AC970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC96Cu;
            // 0x3ac970: 0x5d524f52  .word       0x5D524F52                   # bgtzl       $t2, . + 4 + (0x4F52 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x3AC970 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4A8Cu;
            return;
        }
    }
    ctx->pc = 0x3AC974u;
    // 0x3ac974: 0xa7325  .word       0x000A7325                   # or          $t6, $zero, $t2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac974u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x3ac978: 0x74726576  .word       0x74726576                   # INVALID     $v1, $s2, 0x6576 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac978u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC978 raw=0x74726576");
    // 0x3ac97c: 0x6c616369  ldr         $at, 0x6369($v1)
    ctx->pc = 0x3ac97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x3ac980: 0x7a697320  lq          $t1, 0x7320($s3)
    ctx->pc = 0x3ac980u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 29472)));
    // 0x3ac984: 0x203e2065  addi        $fp, $at, 0x2065
    ctx->pc = 0x3ac984u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x3ac988: 0x30303832  andi        $s0, $at, 0x3832
    ctx->pc = 0x3ac988u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)14386);
    // 0x3ac98c: 0x0  nop
    ctx->pc = 0x3ac98cu;
    // NOP
    // 0x3ac990: 0x7268635f  .word       0x7268635F                   # INVALID     $s3, $t0, 0x635F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac990u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x3AC990 raw=0x7268635F");
    // 0x3ac994: 0x5f616d6f  .word       0x5F616D6F                   # bgtzl       $k1, . + 4 + (0x6D6F << 2) # 00010000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AC994u;
    {
        const bool branch_taken_0x3ac994 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3ac994) {
            ctx->pc = 0x3AC998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC994u;
            // 0x3ac998: 0x6d726f66  ldr         $s2, 0x6F66($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7F54u;
            return;
        }
    }
    ctx->pc = 0x3AC99Cu;
    // 0x3ac99c: 0x6e207461  ldr         $zero, 0x7461($s1)
    ctx->pc = 0x3ac99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3ac9a0: 0x73646565  .word       0x73646565                   # INVALID     $k1, $a0, 0x6565 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac9a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x3AC9A0 raw=0x73646565");
    // 0x3ac9a4: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x3ac9a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x3ac9a8: 0x31206562  andi        $zero, $t1, 0x6562
    ctx->pc = 0x3ac9a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)25954);
    // 0x3ac9ac: 0x3234203a  andi        $s4, $s1, 0x203A
    ctx->pc = 0x3ac9acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8250);
    // 0x3ac9b0: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x3ac9b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x3ac9b4: 0x0  nop
    ctx->pc = 0x3ac9b4u;
    // NOP
    // 0x3ac9b8: 0x75736e55  .word       0x75736E55                   # INVALID     $t3, $s3, 0x6E55 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac9b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC9B8 raw=0x75736E55");
    // 0x3ac9bc: 0x726f7070  .word       0x726F7070                   # pmfhl.uw    $t6 # 026F0000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x3ac9bcu;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x3ac9c0: 0x20646574  addi        $a0, $v1, 0x6574
    ctx->pc = 0x3ac9c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ac9c4: 0x666f7270  daddiu      $t7, $s3, 0x7270
    ctx->pc = 0x3ac9c4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29296);
    // 0x3ac9c8: 0x2f656c69  sltiu       $a1, $k1, 0x6C69
    ctx->pc = 0x3ac9c8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27753) ? 1 : 0);
    // 0x3ac9cc: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x3ac9ccu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
    // 0x3ac9d0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ac9d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x3ac9d4: 0x0  nop
    ctx->pc = 0x3ac9d4u;
    // NOP
    // 0x3ac9d8: 0x7165735f  .word       0x7165735F                   # INVALID     $t3, $a1, 0x735F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ac9d8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x3AC9D8 raw=0x7165735F");
    // 0x3ac9dc: 0x636e6575  daddi       $t6, $k1, 0x6575
    ctx->pc = 0x3ac9dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25973; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x3ac9e0: 0x61635365  daddi       $v1, $t3, 0x5365
    ctx->pc = 0x3ac9e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21349; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
    // 0x3ac9e4: 0x6c62616c  ldr         $v0, 0x616C($v1)
    ctx->pc = 0x3ac9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3ac9e8: 0x74784565  .word       0x74784565                   # INVALID     $v1, $t8, 0x4565 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ac9e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AC9E8 raw=0x74784565");
    // 0x3ac9ec: 0x69736e65  ldl         $s3, 0x6E65($t3)
    ctx->pc = 0x3ac9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x3ac9f0: 0x29286e6f  slti        $t0, $t1, 0x6E6F
    ctx->pc = 0x3ac9f0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)28271) ? 1 : 0);
    // 0x3ac9f4: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x3ac9f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x3ac9f8: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x3ac9f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x3ac9fc: 0x6c706d69  ldr         $s0, 0x6D69($v1)
    ctx->pc = 0x3ac9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28009); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x3aca00: 0x6e656d65  ldr         $a1, 0x6D65($s3)
    ctx->pc = 0x3aca00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28005); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3aca04: 0x646574  teq         $v1, $a0, 405
    ctx->pc = 0x3aca04u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aca08: 0x6e6b6e55  ldr         $t3, 0x6E55($s3)
    ctx->pc = 0x3aca08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28245); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3aca0c: 0x206e776f  addi        $t6, $v1, 0x776F
    ctx->pc = 0x3aca0cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30575, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x3aca10: 0x65747845  daddiu      $s4, $t3, 0x7845
    ctx->pc = 0x3aca10u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30789);
    // 0x3aca14: 0x6f69736e  ldr         $t1, 0x736E($k1)
    ctx->pc = 0x3aca14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29550); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3aca18: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aca18u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x3aca1c: 0x0  nop
    ctx->pc = 0x3aca1cu;
    // NOP
    // 0x3aca20: 0x6369705f  daddi       $t1, $k1, 0x705F
    ctx->pc = 0x3aca20u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x3aca24: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x3aca24u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x3aca28: 0x74617053  .word       0x74617053                   # INVALID     $v1, $at, 0x7053 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aca28u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ACA28 raw=0x74617053");
    // 0x3aca2c: 0x536c6169  beql        $k1, $t4, . + 4 + (0x6169 << 2)
    ctx->pc = 0x3ACA2Cu;
    {
        const bool branch_taken_0x3aca2c = (GPR_U64(ctx, 27) == GPR_U64(ctx, 12));
        if (branch_taken_0x3aca2c) {
            ctx->pc = 0x3ACA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACA2Cu;
            // 0x3aca30: 0x616c6163  daddi       $t4, $t3, 0x6163 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24931; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4FD4u;
            return;
        }
    }
    ctx->pc = 0x3ACA34u;
    // 0x3aca34: 0x45656c62  .word       0x45656C62                   # INVALID     $t3, $a1, 0x6C62 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aca34u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x22 at 0x3ACA34 raw=0x45656C62");
    // 0x3aca38: 0x6e657478  ldr         $a1, 0x7478($s3)
    ctx->pc = 0x3aca38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3aca3c: 0x6e6f6973  ldr         $t7, 0x6973($s3)
    ctx->pc = 0x3aca3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x3aca40: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x3aca40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x3aca44: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x3aca44u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x3aca48: 0x70707573  .word       0x70707573                   # INVALID     $v1, $s0, 0x7573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3aca48u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3ACA48 raw=0x70707573");
    // 0x3aca4c: 0x6574726f  daddiu      $s4, $t3, 0x726F
    ctx->pc = 0x3aca4cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
    // 0x3aca50: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aca50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x3aca54: 0x0  nop
    ctx->pc = 0x3aca54u;
    // NOP
    // 0x3aca58: 0x6369705f  daddi       $t1, $k1, 0x705F
    ctx->pc = 0x3aca58u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x3aca5c: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x3aca5cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x3aca60: 0x706d6554  .word       0x706D6554                   # INVALID     $v1, $t5, 0x6554 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3aca60u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x3ACA60 raw=0x706D6554");
    // 0x3aca64: 0x6c61726f  ldr         $at, 0x726F($v1)
    ctx->pc = 0x3aca64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x3aca68: 0x6c616353  ldr         $at, 0x6353($v1)
    ctx->pc = 0x3aca68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x3aca6c: 0x656c6261  daddiu      $t4, $t3, 0x6261
    ctx->pc = 0x3aca6cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25185);
    // 0x3aca70: 0x65747845  daddiu      $s4, $t3, 0x7845
    ctx->pc = 0x3aca70u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30789);
    // 0x3aca74: 0x6f69736e  ldr         $t1, 0x736E($k1)
    ctx->pc = 0x3aca74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29550); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3aca78: 0x7369206e  .word       0x7369206E                   # INVALID     $k1, $t1, 0x206E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3aca78u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3ACA78 raw=0x7369206E");
    // 0x3aca7c: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aca7cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ACA7C raw=0x746F6E20");
    // 0x3aca80: 0x70757320  .word       0x70757320                   # madd1       $t6, $v1, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3aca80u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3aca84: 0x74726f70  .word       0x74726F70                   # INVALID     $v1, $s2, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aca84u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ACA84 raw=0x74726F70");
    // 0x3aca88: 0x6465  .word       0x00006465                   # move        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aca88u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x3aca8c: 0x0  nop
    ctx->pc = 0x3aca8cu;
    // NOP
    // 0x3aca90: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3aca90u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x3ACA90 raw=0x7062696C");
    // 0x3aca94: 0x203a6461  addi        $k0, $at, 0x6461
    ctx->pc = 0x3aca94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x3aca98: 0x53656373  beql        $k1, $a1, . + 4 + (0x6373 << 2)
    ctx->pc = 0x3ACA98u;
    {
        const bool branch_taken_0x3aca98 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aca98) {
            ctx->pc = 0x3ACA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACA98u;
            // 0x3aca9c: 0x65536669  daddiu      $s3, $t2, 0x6669 (Delay Slot)
            SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)26217);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5868u;
            return;
        }
    }
    ctx->pc = 0x3ACAA0u;
    // 0x3acaa0: 0x616d4474  daddi       $t5, $t3, 0x4474
    ctx->pc = 0x3acaa0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17524; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x3acaa4: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x3acaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x3acaa8: 0xa646c  .word       0x000A646C                   # dadd        $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acaa8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x3acaac: 0x0  nop
    ctx->pc = 0x3acaacu;
    // NOP
    // 0x3acab0: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acab0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x3ACAB0 raw=0x7062696C");
    // 0x3acab4: 0x203a6461  addi        $k0, $at, 0x6461
    ctx->pc = 0x3acab4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x3acab8: 0x64615074  daddiu      $at, $v1, 0x5074
    ctx->pc = 0x3acab8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)20596);
    // 0x3acabc: 0x20616d44  addi        $at, $v1, 0x6D44
    ctx->pc = 0x3acabcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x3acac0: 0x75727453  .word       0x75727453                   # INVALID     $t3, $s2, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3acac0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ACAC0 raw=0x75727453");
    // 0x3acac4: 0x72757463  .word       0x72757463                   # INVALID     $s3, $s5, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acac4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x3ACAC4 raw=0x72757463");
    // 0x3acac8: 0x6e492065  ldr         $t1, 0x2065($s2)
    ctx->pc = 0x3acac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3acacc: 0x696c6176  ldl         $t4, 0x6176($t3)
    ctx->pc = 0x3acaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3acad0: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x3acad4: 0x0  nop
    ctx->pc = 0x3acad4u;
    // NOP
    // 0x3acad8: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acad8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x3ACAD8 raw=0x7062696C");
    // 0x3acadc: 0x203a6461  addi        $k0, $at, 0x6461
    ctx->pc = 0x3acadcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x3acae0: 0x75646f4d  .word       0x75646F4D                   # INVALID     $t3, $a0, 0x6F4D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3acae0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ACAE0 raw=0x75646F4D");
    // 0x3acae4: 0x7620656c  .word       0x7620656C                   # INVALID     $s1, $zero, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3acae4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ACAE4 raw=0x7620656C");
    // 0x3acae8: 0x69737265  ldl         $s3, 0x7265($t3)
    ctx->pc = 0x3acae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x3acaec: 0x6d206e6f  ldr         $zero, 0x6E6F($t1)
    ctx->pc = 0x3acaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3acaf0: 0x616d7369  daddi       $t5, $t3, 0x7369
    ctx->pc = 0x3acaf0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29545; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x3acaf4: 0x20686374  addi        $t0, $v1, 0x6374
    ctx->pc = 0x3acaf4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25460, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x3acaf8: 0x0  nop
    ctx->pc = 0x3acaf8u;
    // NOP
    // 0x3acafc: 0x0  nop
    ctx->pc = 0x3acafcu;
    // NOP
    // 0x3acb00: 0x62696c5b  daddi       $t1, $s3, 0x6C5B
    ctx->pc = 0x3acb00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27739; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x3acb04: 0x2e646170  sltiu       $a0, $s3, 0x6170
    ctx->pc = 0x3acb04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24944) ? 1 : 0);
    // 0x3acb08: 0x203d2061  addi        $sp, $at, 0x2061
    ctx->pc = 0x3acb08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8289, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x3acb0c: 0x252e6425  addiu       $t6, $t1, 0x6425
    ctx->pc = 0x3acb0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
    // 0x3acb10: 0x70202c64  .word       0x70202C64                   # INVALID     $at, $zero, 0x2C64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acb10u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x3ACB10 raw=0x70202C64");
    // 0x3acb14: 0x616d6461  daddi       $t5, $t3, 0x6461
    ctx->pc = 0x3acb14u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25697; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x3acb18: 0x72692e6e  .word       0x72692E6E                   # INVALID     $s3, $t1, 0x2E6E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acb18u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3ACB18 raw=0x72692E6E");
    // 0x3acb1c: 0x203d2078  addi        $sp, $at, 0x2078
    ctx->pc = 0x3acb1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8312, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x3acb20: 0x252e6425  addiu       $t6, $t1, 0x6425
    ctx->pc = 0x3acb20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
    // 0x3acb24: 0xa5d64  .word       0x000A5D64                   # and         $t3, $zero, $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acb24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 10));
    // 0x3acb28: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acb28u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x3ACB28 raw=0x7062696C");
    // 0x3acb2c: 0x203a6461  addi        $k0, $at, 0x6461
    ctx->pc = 0x3acb2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x3acb30: 0x66667562  daddiu      $a2, $s3, 0x7562
    ctx->pc = 0x3acb30u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)30050);
    // 0x3acb34: 0x61207265  daddi       $zero, $t1, 0x7265
    ctx->pc = 0x3acb34u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29285; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x3acb38: 0x20726464  addi        $s2, $v1, 0x6464
    ctx->pc = 0x3acb38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25700, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x3acb3c: 0x6e207369  ldr         $zero, 0x7369($s1)
    ctx->pc = 0x3acb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29545); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3acb40: 0x3620746f  ori         $zero, $s1, 0x746F
    ctx->pc = 0x3acb40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)29807);
    // 0x3acb44: 0x79622034  lq          $v0, 0x2034($t3)
    ctx->pc = 0x3acb44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 8244)));
    // 0x3acb48: 0x61206574  daddi       $zero, $t1, 0x6574
    ctx->pc = 0x3acb48u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25972; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x3acb4c: 0x6e67696c  ldr         $a3, 0x696C($s3)
    ctx->pc = 0x3acb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3acb50: 0x3025202e  andi        $a1, $at, 0x202E
    ctx->pc = 0x3acb50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)8238);
    // 0x3acb54: 0xa7838  dsll        $t7, $t2, 0
    ctx->pc = 0x3acb54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << 0);
    // 0x3acb58: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acb58u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x3ACB58 raw=0x7062696C");
    // 0x3acb5c: 0x203a6461  addi        $k0, $at, 0x6461
    ctx->pc = 0x3acb5cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x3acb60: 0x20646170  addi        $a0, $v1, 0x6170
    ctx->pc = 0x3acb60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24944, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3acb64: 0x74726f70  .word       0x74726F70                   # INVALID     $v1, $s2, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3acb64u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ACB64 raw=0x74726F70");
    // 0x3acb68: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x3acb68u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x3acb6c: 0x65726c61  daddiu      $s2, $t3, 0x6C61
    ctx->pc = 0x3acb6cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27745);
    // 0x3acb70: 0x20796461  addi        $t9, $v1, 0x6461
    ctx->pc = 0x3acb70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x3acb74: 0x6e65706f  ldr         $a1, 0x706F($s3)
    ctx->pc = 0x3acb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3acb78: 0x64255b20  daddiu      $a1, $at, 0x5B20
    ctx->pc = 0x3acb78u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)23328);
    // 0x3acb7c: 0x64255b5d  daddiu      $a1, $at, 0x5B5D
    ctx->pc = 0x3acb7cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)23389);
    // 0x3acb80: 0xa5d  .word       0x00000A5D                   # dmultu      $zero, $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acb80u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x3ACB80 raw=0x00000A5D");
    // 0x3acb84: 0x0  nop
    ctx->pc = 0x3acb84u;
    // NOP
    // 0x3acb88: 0x4f525245  .word       0x4F525245                   # INVALID     $k0, $s2, 0x5245 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3acb88u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3ACB88 raw=0x4F525245");
    // 0x3acb8c: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acb8cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
    // 0x3acb90: 0x42415453  .word       0x42415453                   # INVALID     $s2, $at, 0x5453 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acb90u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3ACB90 raw=0x42415453");
    // 0x3acb94: 0x454c  syscall     277
    ctx->pc = 0x3acb94u;
    ctx->pc = 0x3ACB98u;
runtime->handleSyscall(rdram, ctx, 0x115u);
label_3acb98:
    // 0x3acb98: 0x43455845  .word       0x43455845                   # INVALID     $k0, $a1, 0x5845 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acb98u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3ACB98 raw=0x43455845");
    // 0x3acb9c: 0x444d43  .word       0x00444D43                   # sra         $t1, $a0, 21 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acb9cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 21));
    // 0x3acba0: 0x444e4946  .word       0x444E4946                   # cfc1        $t6, $9 # 00000146 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3acba0u;
    SET_GPR_U32(ctx, 14, 0); // Unimplemented FCR9
    // 0x3acba4: 0x31505443  andi        $s0, $t2, 0x5443
    ctx->pc = 0x3acba4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)21571);
    // 0x3acba8: 0x0  nop
    ctx->pc = 0x3acba8u;
    // NOP
    // 0x3acbac: 0x0  nop
    ctx->pc = 0x3acbacu;
    // NOP
    // 0x3acbb0: 0x0  nop
    ctx->pc = 0x3acbb0u;
    // NOP
    // 0x3acbb4: 0x0  nop
    ctx->pc = 0x3acbb4u;
    // NOP
    // 0x3acbb8: 0x43534944  .word       0x43534944                   # INVALID     $k0, $s3, 0x4944 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acbb8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3ACBB8 raw=0x43534944");
    // 0x3acbbc: 0x454e4e4f  .word       0x454E4E4F                   # INVALID     $t2, $t6, 0x4E4F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3acbbcu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xF at 0x3ACBBC raw=0x454E4E4F");
    // 0x3acbc0: 0x5443  sra         $t2, $zero, 17
    ctx->pc = 0x3acbc0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), 17));
    // 0x3acbc4: 0x0  nop
    ctx->pc = 0x3acbc4u;
    // NOP
    // 0x3acbc8: 0x59535542  .word       0x59535542                   # blezl       $t2, . + 4 + (0x5542 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ACBC8u;
    {
        const bool branch_taken_0x3acbc8 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x3acbc8) {
            ctx->pc = 0x3C20D4u;
            return;
        }
    }
    ctx->pc = 0x3ACBD0u;
    // 0x3acbd0: 0x4c494146  .word       0x4C494146                   # INVALID     $v0, $t1, 0x4146 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3acbd0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3ACBD0 raw=0x4C494146");
    // 0x3acbd4: 0x4445  .word       0x00004445                   # INVALID     $zero, $zero, 0x4445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acbd4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3ACBD4 raw=0x00004445");
    // 0x3acbd8: 0x504d4f43  beql        $v0, $t5, . + 4 + (0x4F43 << 2)
    ctx->pc = 0x3ACBD8u;
    {
        const bool branch_taken_0x3acbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        if (branch_taken_0x3acbd8) {
            ctx->pc = 0x3ACBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACBD8u;
            // 0x3acbdc: 0x4554454c  .word       0x4554454C                   # INVALID     $t2, $s4, 0x454C # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xC at 0x3ACBDC raw=0x4554454C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C08E8u;
            return;
        }
    }
    ctx->pc = 0x3ACBE0u;
    // 0x3acbe0: 0x0  nop
    ctx->pc = 0x3acbe0u;
    // NOP
    // 0x3acbe4: 0x0  nop
    ctx->pc = 0x3acbe4u;
    // NOP
    // 0x3acbe8: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acbe8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ACBE8 raw=0x43656373");
    // 0x3acbec: 0x66624364  daddiu      $v0, $s3, 0x4364
    ctx->pc = 0x3acbecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)17252);
    // 0x3acbf0: 0x3d636e75  .word       0x3D636E75                   # lui         $v1, 0x6E75 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3acbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28277 << 16));
    // 0x3acbf4: 0x20642520  addi        $a0, $v1, 0x2520
    ctx->pc = 0x3acbf4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3acbf8: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acbf8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ACBF8 raw=0x43656373");
    // 0x3acbfc: 0x66624364  daddiu      $v0, $s3, 0x4364
    ctx->pc = 0x3acbfcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)17252);
    // 0x3acc00: 0x5f636e75  .word       0x5F636E75                   # bgtzl       $k1, . + 4 + (0x6E75 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ACC00u;
    {
        const bool branch_taken_0x3acc00 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3acc00) {
            ctx->pc = 0x3ACC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACC00u;
            // 0x3acc04: 0x3d6d756e  .word       0x3D6D756E                   # lui         $t5, 0x756E # 01600000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)30062 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C85D8u;
            return;
        }
    }
    ctx->pc = 0x3ACC08u;
    // 0x3acc08: 0xa642520  j           func_9909480
    ctx->pc = 0x3ACC08u;
    ctx->pc = 0x9909480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9909480u, 0x3ACC08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ACC10u;
    // 0x3acc10: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x3acc10u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x3acc14: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x3acc14u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3acc18: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x3acc18u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
    // 0x3acc1c: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acc1cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3acc20: 0x776f5020  .word       0x776F5020                   # INVALID     $k1, $t7, 0x5020 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3acc20u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ACC20 raw=0x776F5020");
    // 0x3acc24: 0x664f7265  daddiu      $t7, $s2, 0x7265
    ctx->pc = 0x3acc24u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)29285);
    // 0x3acc28: 0xa424366  j           func_9090D98
    ctx->pc = 0x3ACC28u;
    ctx->pc = 0x9090D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9090D98u, 0x3ACC28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ACC30u;
    // 0x3acc30: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x3acc30u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x3acc34: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x3acc34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3acc38: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x3acc38u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
    // 0x3acc3c: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acc3cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3acc40: 0x53644320  beql        $k1, $a0, . + 4 + (0x4320 << 2)
    ctx->pc = 0x3ACC40u;
    {
        const bool branch_taken_0x3acc40 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 4));
        if (branch_taken_0x3acc40) {
            ctx->pc = 0x3ACC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACC40u;
            // 0x3acc44: 0x63726165  daddi       $s2, $k1, 0x6165 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24933; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD8C4u;
            return;
        }
    }
    ctx->pc = 0x3ACC48u;
    // 0x3acc48: 0x6c694668  ldr         $t1, 0x4668($v1)
    ctx->pc = 0x3acc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 18024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3acc4c: 0xa65  .word       0x00000A65                   # move        $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acc4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x3acc50: 0x63206565  daddi       $zero, $t9, 0x6565
    ctx->pc = 0x3acc50u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)25957; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x3acc54: 0x206c6c61  addi        $t4, $v1, 0x6C61
    ctx->pc = 0x3acc54u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27745, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x3acc58: 0x20646d63  addi        $a0, $v1, 0x6D63
    ctx->pc = 0x3acc58u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28003, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3acc5c: 0x72616573  .word       0x72616573                   # INVALID     $s3, $at, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acc5cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3ACC5C raw=0x72616573");
    // 0x3acc60: 0x25206863  addiu       $zero, $t1, 0x6863
    ctx->pc = 0x3acc60u;
    // NOP (addiu $zero, ...)
    // 0x3acc64: 0xa73  tltu        $zero, $zero, 41
    ctx->pc = 0x3acc64u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x3acc68: 0x72616573  .word       0x72616573                   # INVALID     $s3, $at, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acc68u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3ACC68 raw=0x72616573");
    // 0x3acc6c: 0x6e206863  ldr         $zero, 0x6863($s1)
    ctx->pc = 0x3acc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3acc70: 0x20656d61  addi        $a1, $v1, 0x6D61
    ctx->pc = 0x3acc70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28001, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x3acc74: 0xa7325  .word       0x000A7325                   # or          $t6, $zero, $t2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acc74u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x3acc78: 0x72616573  .word       0x72616573                   # INVALID     $s3, $at, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acc78u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3ACC78 raw=0x72616573");
    // 0x3acc7c: 0x73206863  .word       0x73206863                   # INVALID     $t9, $zero, 0x6863 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acc7cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x3ACC7C raw=0x73206863");
    // 0x3acc80: 0x20657a69  addi        $a1, $v1, 0x7A69
    ctx->pc = 0x3acc80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)31337, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x3acc84: 0xa6425  .word       0x000A6425                   # or          $t4, $zero, $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acc84u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x3acc88: 0x72616573  .word       0x72616573                   # INVALID     $s3, $at, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acc88u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3ACC88 raw=0x72616573");
    // 0x3acc8c: 0x6c206863  ldr         $zero, 0x6863($at)
    ctx->pc = 0x3acc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3acc90: 0x6c20636f  ldr         $zero, 0x636F($at)
    ctx->pc = 0x3acc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 25455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x3acc94: 0x25206e62  addiu       $zero, $t1, 0x6E62
    ctx->pc = 0x3acc94u;
    // NOP (addiu $zero, ...)
    // 0x3acc98: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acc98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x3acc9c: 0x0  nop
    ctx->pc = 0x3acc9cu;
    // NOP
    // 0x3acca0: 0x646d634e  daddiu      $t5, $v1, 0x634E
    ctx->pc = 0x3acca0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25422);
    // 0x3acca4: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x3acca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x3acca8: 0x6573206c  daddiu      $s3, $t3, 0x206C
    ctx->pc = 0x3acca8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8300);
    // 0x3accac: 0x6320616d  daddi       $zero, $t9, 0x616D
    ctx->pc = 0x3accacu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)24941; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x3accb0: 0x635f7275  daddi       $ra, $k0, 0x7275
    ctx->pc = 0x3accb0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x3accb4: 0x253a646d  addiu       $k0, $t1, 0x646D
    ctx->pc = 0x3accb4u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 25709));
    // 0x3accb8: 0x656b2064  daddiu      $t3, $t3, 0x2064
    ctx->pc = 0x3accb8u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
    // 0x3accbc: 0x635f7065  daddi       $ra, $k0, 0x7065
    ctx->pc = 0x3accbcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)28773; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x3accc0: 0x253a646d  addiu       $k0, $t1, 0x646D
    ctx->pc = 0x3accc0u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 25709));
    // 0x3accc4: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3accc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x3accc8: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x3accc8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x3acccc: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x3accccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3accd0: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x3accd0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
    // 0x3accd4: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3accd4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3accd8: 0x43204e20  .word       0x43204E20                   # INVALID     $t9, $zero, 0x4E20 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3accd8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x3ACCD8 raw=0x43204E20");
    // 0x3accdc: 0xa444d  break       10, 273
    ctx->pc = 0x3accdcu;
    runtime->handleBreak(rdram, ctx);
    // 0x3acce0: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x3acce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3acce4: 0x52644320  beql        $s3, $a0, . + 4 + (0x4320 << 2)
    ctx->pc = 0x3ACCE4u;
    {
        const bool branch_taken_0x3acce4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x3acce4) {
            ctx->pc = 0x3ACCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACCE4u;
            // 0x3acce8: 0x43646165  .word       0x43646165                   # INVALID     $k1, $a0, 0x6165 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ACCE8 raw=0x43646165");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD968u;
            return;
        }
    }
    ctx->pc = 0x3ACCECu;
    // 0x3accec: 0x6e696168  ldr         $t1, 0x6168($s3)
    ctx->pc = 0x3accecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3accf0: 0x646d6320  daddiu      $t5, $v1, 0x6320
    ctx->pc = 0x3accf0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25376);
    // 0x3accf4: 0xa3020  add         $a2, $zero, $t2
    ctx->pc = 0x3accf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x3accf8: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x3accf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3accfc: 0x52644320  beql        $s3, $a0, . + 4 + (0x4320 << 2)
    ctx->pc = 0x3ACCFCu;
    {
        const bool branch_taken_0x3accfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x3accfc) {
            ctx->pc = 0x3ACD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACCFCu;
            // 0x3acd00: 0x43646165  .word       0x43646165                   # INVALID     $k1, $a0, 0x6165 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ACD00 raw=0x43646165");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD980u;
            return;
        }
    }
    ctx->pc = 0x3ACD04u;
    // 0x3acd04: 0x6e696168  ldr         $t1, 0x6168($s3)
    ctx->pc = 0x3acd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3acd08: 0x646d6320  daddiu      $t5, $v1, 0x6320
    ctx->pc = 0x3acd08u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25376);
    // 0x3acd0c: 0xa3120  .word       0x000A3120                   # add         $a2, $zero, $t2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acd0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x3acd10: 0x53656373  beql        $k1, $a1, . + 4 + (0x6373 << 2)
    ctx->pc = 0x3ACD10u;
    {
        const bool branch_taken_0x3acd10 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x3acd10) {
            ctx->pc = 0x3ACD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACD10u;
            // 0x3acd14: 0x72576669  .word       0x72576669                   # INVALID     $s2, $s7, 0x6669 # 00000000 <InstrIdType: R5900_MMI_3> (Delay Slot)
            throw std::runtime_error("Unhandled MMI3 instruction: function 0x19 at 0x3ACD14 raw=0x72576669");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5AE0u;
            return;
        }
    }
    ctx->pc = 0x3ACD18u;
    // 0x3acd18: 0x42657469  .word       0x42657469                   # INVALID     $s3, $a1, 0x7469 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acd18u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x3ACD18 raw=0x42657469");
    // 0x3acd1c: 0x446b6361  .word       0x446B6361                   # INVALID     $v1, $t3, 0x6361 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3acd1cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x21 at 0x3ACD1C raw=0x446B6361");
    // 0x3acd20: 0x68636143  ldl         $v1, 0x6143($v1)
    ctx->pc = 0x3acd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24899); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3acd24: 0x64612065  daddiu      $at, $v1, 0x2065
    ctx->pc = 0x3acd24u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)8293);
    // 0x3acd28: 0x203d7264  addi        $sp, $at, 0x7264
    ctx->pc = 0x3acd28u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29284, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x3acd2c: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x3acd2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
    // 0x3acd30: 0x73207838  .word       0x73207838                   # INVALID     $t9, $zero, 0x7838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acd30u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x3ACD30 raw=0x73207838");
    // 0x3acd34: 0x3d657a69  .word       0x3D657A69                   # lui         $a1, 0x7A69 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3acd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31337 << 16));
    // 0x3acd38: 0xa642520  j           func_9909480
    ctx->pc = 0x3ACD38u;
    ctx->pc = 0x9909480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9909480u, 0x3ACD38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ACD40u;
    // 0x3acd40: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x3acd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3acd44: 0x52644320  beql        $s3, $a0, . + 4 + (0x4320 << 2)
    ctx->pc = 0x3ACD44u;
    {
        const bool branch_taken_0x3acd44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x3acd44) {
            ctx->pc = 0x3ACD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACD44u;
            // 0x3acd48: 0x43646165  .word       0x43646165                   # INVALID     $k1, $a0, 0x6165 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ACD48 raw=0x43646165");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD9C8u;
            return;
        }
    }
    ctx->pc = 0x3ACD4Cu;
    // 0x3acd4c: 0x6e696168  ldr         $t1, 0x6168($s3)
    ctx->pc = 0x3acd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3acd50: 0x646d6320  daddiu      $t5, $v1, 0x6320
    ctx->pc = 0x3acd50u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25376);
    // 0x3acd54: 0xa3220  .word       0x000A3220                   # add         $a2, $zero, $t2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acd54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x3acd58: 0x65726463  daddiu      $s2, $t3, 0x6463
    ctx->pc = 0x3acd58u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25699);
    // 0x3acd5c: 0x65206461  daddiu      $zero, $t1, 0x6461
    ctx->pc = 0x3acd5cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25697);
    // 0x3acd60: 0xa646e  .word       0x000A646E                   # dsub        $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acd60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x3acd64: 0x0  nop
    ctx->pc = 0x3acd64u;
    // NOP
    ctx->pc = 0x3acd68u;
}
