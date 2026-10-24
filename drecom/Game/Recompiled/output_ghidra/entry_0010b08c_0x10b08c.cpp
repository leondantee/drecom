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

// Function: entry_0010b08c
// Address: 0x10b08c - 0x10b298
void entry_0010b08c_0x10b08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b08c_0x10b08c");
#endif

    switch (ctx->pc) {
        case 0x10b0c8u: goto label_10b0c8;
        case 0x10b0d8u: goto label_10b0d8;
        case 0x10b0ecu: goto label_10b0ec;
        case 0x10b100u: goto label_10b100;
        case 0x10b188u: goto label_10b188;
        case 0x10b198u: goto label_10b198;
        case 0x10b1a8u: goto label_10b1a8;
        case 0x10b1b8u: goto label_10b1b8;
        case 0x10b1d4u: goto label_10b1d4;
        case 0x10b1f0u: goto label_10b1f0;
        case 0x10b20cu: goto label_10b20c;
        case 0x10b22cu: goto label_10b22c;
        case 0x10b24cu: goto label_10b24c;
        default: break;
    }

    ctx->pc = 0x10b08cu;

    // 0x10b08c: 0x24100180  addiu       $s0, $zero, 0x180
    ctx->pc = 0x10b08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10b090: 0xad630004  sw          $v1, 0x4($t3)
    ctx->pc = 0x10b090u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
    // 0x10b094: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x10b094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x10b098: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x10b098u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x10b09c: 0x62043  sra         $a0, $a2, 1
    ctx->pc = 0x10b09cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
    // 0x10b0a0: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x10b0a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x10b0a4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10b0a8: 0x27d10108  addiu       $s1, $fp, 0x108
    ctx->pc = 0x10b0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 264));
    // 0x10b0ac: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10b0b0: 0xac443d14  sw          $a0, 0x3D14($v0)
    ctx->pc = 0x10b0b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x383D14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D14u, _value); } while (0);
    // 0x10b0b4: 0xd08018  mult        $s0, $a2, $s0
    ctx->pc = 0x10b0b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x10b0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0bc: 0xac653d18  sw          $a1, 0x3D18($v1)
    ctx->pc = 0x10b0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15640), GPR_U32(ctx, 5));
    // 0x10b0c0: 0xc042966  jal         func_10A598
    ctx->pc = 0x10B0C0u;
    SET_GPR_U32(ctx, 31, 0x10B0C8u);
    ctx->pc = 0x10B0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B0C0u;
    // 0x10b0c4: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A598u, 0x10B0C0u, 0x10B0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B0C8u;
label_10b0c8:
    // 0x10b0c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0d0: 0xc04296a  jal         func_10A5A8
    ctx->pc = 0x10B0D0u;
    SET_GPR_U32(ctx, 31, 0x10B0D8u);
    ctx->pc = 0x10B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B0D0u;
    // 0x10b0d4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A5A8u, 0x10B0D0u, 0x10B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B0D8u;
label_10b0d8:
    // 0x10b0d8: 0xafc200fc  sw          $v0, 0xFC($fp)
    ctx->pc = 0x10b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 252), GPR_U32(ctx, 2));
    // 0x10b0dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0e4: 0xc04296a  jal         func_10A5A8
    ctx->pc = 0x10B0E4u;
    SET_GPR_U32(ctx, 31, 0x10B0ECu);
    ctx->pc = 0x10B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B0E4u;
    // 0x10b0e8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A5A8u, 0x10B0E4u, 0x10B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B0ECu;
label_10b0ec:
    // 0x10b0ec: 0xafc20100  sw          $v0, 0x100($fp)
    ctx->pc = 0x10b0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 256), GPR_U32(ctx, 2));
    // 0x10b0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0f8: 0xc04296a  jal         func_10A5A8
    ctx->pc = 0x10B0F8u;
    SET_GPR_U32(ctx, 31, 0x10B100u);
    ctx->pc = 0x10B0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B0F8u;
    // 0x10b0fc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A5A8u, 0x10B0F8u, 0x10B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B100u;
label_10b100:
    // 0x10b100: 0xafc20104  sw          $v0, 0x104($fp)
    ctx->pc = 0x10b100u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 2));
    // 0x10b104: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10b104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10b108: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10b108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b10c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10b10cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10b110: 0x24424190  addiu       $v0, $v0, 0x4190
    ctx->pc = 0x10b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16784));
    // 0x10b114: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10b114u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10b118: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10b118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10b11c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x10b11cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x10b120: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x10b120u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x10b124: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x10b124u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x10b128: 0x8fc200fc  lw          $v0, 0xFC($fp)
    ctx->pc = 0x10b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 252)));
    // 0x10b12c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x10b12cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x10b130: 0x26103e50  addiu       $s0, $s0, 0x3E50
    ctx->pc = 0x10b130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15952));
    // 0x10b134: 0x26313eb8  addiu       $s1, $s1, 0x3EB8
    ctx->pc = 0x10b134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16056));
    // 0x10b138: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10b138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x10b13c: 0x26523f20  addiu       $s2, $s2, 0x3F20
    ctx->pc = 0x10b13cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16160));
    // 0x10b140: 0x26733f88  addiu       $s3, $s3, 0x3F88
    ctx->pc = 0x10b140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16264));
    // 0x10b144: 0x26943ff0  addiu       $s4, $s4, 0x3FF0
    ctx->pc = 0x10b144u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16368));
    // 0x10b148: 0x8fc20100  lw          $v0, 0x100($fp)
    ctx->pc = 0x10b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 256)));
    // 0x10b14c: 0x26b54058  addiu       $s5, $s5, 0x4058
    ctx->pc = 0x10b14cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16472));
    // 0x10b150: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x10b150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b154: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x10b154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b158: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x10b158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x10b15c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x10b15cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b168: 0x8fc20104  lw          $v0, 0x104($fp)
    ctx->pc = 0x10b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 260)));
    // 0x10b16c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10b16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b170: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x10b170u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x10b174: 0x254a40c0  addiu       $t2, $t2, 0x40C0
    ctx->pc = 0x10b174u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16576));
    // 0x10b178: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x10b178u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x10b17c: 0x256b4128  addiu       $t3, $t3, 0x4128
    ctx->pc = 0x10b17cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16680));
    // 0x10b180: 0xc042cb2  jal         func_10B2C8
    ctx->pc = 0x10B180u;
    SET_GPR_U32(ctx, 31, 0x10B188u);
    ctx->pc = 0x10B184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B180u;
    // 0x10b184: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2C8u, 0x10B180u, 0x10B188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B188u;
label_10b188:
    // 0x10b188: 0x8ec53d0c  lw          $a1, 0x3D0C($s6)
    ctx->pc = 0x10b188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15628)));
    // 0x10b18c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b190: 0xc042b82  jal         func_10AE08
    ctx->pc = 0x10B190u;
    SET_GPR_U32(ctx, 31, 0x10B198u);
    ctx->pc = 0x10B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B190u;
    // 0x10b194: 0x8ee63d10  lw          $a2, 0x3D10($s7) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE08u, 0x10B190u, 0x10B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B198u;
label_10b198:
    // 0x10b198: 0x8ec53d0c  lw          $a1, 0x3D0C($s6)
    ctx->pc = 0x10b198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15628)));
    // 0x10b19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1a0: 0xc042b82  jal         func_10AE08
    ctx->pc = 0x10B1A0u;
    SET_GPR_U32(ctx, 31, 0x10B1A8u);
    ctx->pc = 0x10B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1A0u;
    // 0x10b1a4: 0x8ee63d10  lw          $a2, 0x3D10($s7) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE08u, 0x10B1A0u, 0x10B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1A8u;
label_10b1a8:
    // 0x10b1a8: 0x8ec53d0c  lw          $a1, 0x3D0C($s6)
    ctx->pc = 0x10b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15628)));
    // 0x10b1ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1b0: 0xc042b82  jal         func_10AE08
    ctx->pc = 0x10B1B0u;
    SET_GPR_U32(ctx, 31, 0x10B1B8u);
    ctx->pc = 0x10B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1B0u;
    // 0x10b1b4: 0x8ee63d10  lw          $a2, 0x3D10($s7) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE08u, 0x10B1B0u, 0x10B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1B8u;
label_10b1b8:
    // 0x10b1b8: 0x8ee63d10  lw          $a2, 0x3D10($s7)
    ctx->pc = 0x10b1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15632)));
    // 0x10b1bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1c0: 0x8ec53d0c  lw          $a1, 0x3D0C($s6)
    ctx->pc = 0x10b1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15628)));
    // 0x10b1c4: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x10b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x10b1c8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x10b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10b1cc: 0xc042b82  jal         func_10AE08
    ctx->pc = 0x10B1CCu;
    SET_GPR_U32(ctx, 31, 0x10B1D4u);
    ctx->pc = 0x10B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1CCu;
    // 0x10b1d0: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE08u, 0x10B1CCu, 0x10B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1D4u;
label_10b1d4:
    // 0x10b1d4: 0x8ee63d10  lw          $a2, 0x3D10($s7)
    ctx->pc = 0x10b1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15632)));
    // 0x10b1d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1dc: 0x8ec53d0c  lw          $a1, 0x3D0C($s6)
    ctx->pc = 0x10b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15628)));
    // 0x10b1e0: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x10b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x10b1e4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x10b1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10b1e8: 0xc042b82  jal         func_10AE08
    ctx->pc = 0x10B1E8u;
    SET_GPR_U32(ctx, 31, 0x10B1F0u);
    ctx->pc = 0x10B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1E8u;
    // 0x10b1ec: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE08u, 0x10B1E8u, 0x10B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1F0u;
label_10b1f0:
    // 0x10b1f0: 0x8ee63d10  lw          $a2, 0x3D10($s7)
    ctx->pc = 0x10b1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15632)));
    // 0x10b1f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10b1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1f8: 0x8ec53d0c  lw          $a1, 0x3D0C($s6)
    ctx->pc = 0x10b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15628)));
    // 0x10b1fc: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x10b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x10b200: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x10b200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10b204: 0xc042b82  jal         func_10AE08
    ctx->pc = 0x10B204u;
    SET_GPR_U32(ctx, 31, 0x10B20Cu);
    ctx->pc = 0x10B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B204u;
    // 0x10b208: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE08u, 0x10B204u, 0x10B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B20Cu;
label_10b20c:
    // 0x10b20c: 0x8ee63d10  lw          $a2, 0x3D10($s7)
    ctx->pc = 0x10b20cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15632)));
    // 0x10b210: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10b210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10b214: 0x248440c0  addiu       $a0, $a0, 0x40C0
    ctx->pc = 0x10b214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    // 0x10b218: 0x8ec53d0c  lw          $a1, 0x3D0C($s6)
    ctx->pc = 0x10b218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15628)));
    // 0x10b21c: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x10b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x10b220: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x10b220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10b224: 0xc042b82  jal         func_10AE08
    ctx->pc = 0x10B224u;
    SET_GPR_U32(ctx, 31, 0x10B22Cu);
    ctx->pc = 0x10B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B224u;
    // 0x10b228: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE08u, 0x10B224u, 0x10B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B22Cu;
label_10b22c:
    // 0x10b22c: 0x8ee63d10  lw          $a2, 0x3D10($s7)
    ctx->pc = 0x10b22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15632)));
    // 0x10b230: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10b230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10b234: 0x24844128  addiu       $a0, $a0, 0x4128
    ctx->pc = 0x10b234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16680));
    // 0x10b238: 0x8ec53d0c  lw          $a1, 0x3D0C($s6)
    ctx->pc = 0x10b238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15628)));
    // 0x10b23c: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x10b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x10b240: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x10b240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10b244: 0xc042b82  jal         func_10AE08
    ctx->pc = 0x10B244u;
    SET_GPR_U32(ctx, 31, 0x10B24Cu);
    ctx->pc = 0x10B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B244u;
    // 0x10b248: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE08u, 0x10B244u, 0x10B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B24Cu;
label_10b24c:
    // 0x10b24c: 0x8ee63d10  lw          $a2, 0x3D10($s7)
    ctx->pc = 0x10b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15632)));
    // 0x10b250: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10b250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10b254: 0x24844190  addiu       $a0, $a0, 0x4190
    ctx->pc = 0x10b254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16784));
    // 0x10b258: 0x8ec53d0c  lw          $a1, 0x3D0C($s6)
    ctx->pc = 0x10b258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15628)));
    // 0x10b25c: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x10b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x10b260: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x10b260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10b264: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x10b264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10b268: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x10b268u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10b26c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x10b26cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10b270: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x10b270u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x10b274: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x10b274u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10b278: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x10b278u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b27c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x10b27cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b280: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10b280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b284: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10b284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b288: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10b288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b28c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10b28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b290: 0x8042b82  j           func_10AE08
    ctx->pc = 0x10B290u;
    ctx->pc = 0x10B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B290u;
    // 0x10b294: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE08u;
    ps2__RefImageInit_0x10ae08(rdram, ctx, runtime); return;
    ctx->pc = 0x10B298u;
}
