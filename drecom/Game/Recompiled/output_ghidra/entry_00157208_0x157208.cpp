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

// Function: entry_00157208
// Address: 0x157208 - 0x157340
void entry_00157208_0x157208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157208_0x157208");
#endif

    switch (ctx->pc) {
        case 0x15723cu: goto label_15723c;
        case 0x157268u: goto label_157268;
        default: break;
    }

    ctx->pc = 0x157208u;

    // 0x157208: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x157208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15720c: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x15720cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x157210: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x157210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x157214: 0x3462104f  ori         $v0, $v1, 0x104F
    ctx->pc = 0x157214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4175);
    // 0x157218: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x157218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x15721c: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x15721cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x157220: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x157220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x157224: 0xfe820058  sd          $v0, 0x58($s4)
    ctx->pc = 0x157224u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 2));
    // 0x157228: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x157228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15722c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x15722cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x157230: 0x26850050  addiu       $a1, $s4, 0x50
    ctx->pc = 0x157230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x157234: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x157234u;
    SET_GPR_U32(ctx, 31, 0x15723Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x157234u, 0x15723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15723Cu;
label_15723c:
    // 0x15723c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15723cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x157240: 0xae830030  sw          $v1, 0x30($s4)
    ctx->pc = 0x157240u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 3));
    // 0x157244: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x157244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x157248: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x157248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x15724c: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x15724cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
    // 0x157250: 0xfe800038  sd          $zero, 0x38($s4)
    ctx->pc = 0x157250u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 0));
    // 0x157254: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x157254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x157258: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x157258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15725c: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x15725cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x157260: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x157260u;
    SET_GPR_U32(ctx, 31, 0x157268u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x157260u, 0x157268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157268u;
label_157268:
    // 0x157268: 0x269700b0  addiu       $s7, $s4, 0xB0
    ctx->pc = 0x157268u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x15726c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x15726cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x157270: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x157270u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x157274: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x157274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x157278: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x157278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x15727c: 0xaee30004  sw          $v1, 0x4($s7)
    ctx->pc = 0x15727cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
    // 0x157280: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x157280u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
    // 0x157284: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x157284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x157288: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x157288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x15728c: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x15728cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x157290: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157294: 0x90234f10  lbu         $v1, 0x4F10($at)
    ctx->pc = 0x157294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x157298: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x157298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15729c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x15729cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1572a0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1572a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1572a4: 0x34838080  ori         $v1, $a0, 0x8080
    ctx->pc = 0x1572a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x1572a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1572a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1572ac: 0x26e30010  addiu       $v1, $s7, 0x10
    ctx->pc = 0x1572acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1572b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1572b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1572b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1572b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1572b8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1572b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1572bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1572bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1572c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1572c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1572c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1572c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1572c8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1572c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1572cc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1572ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1572d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1572d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1572d4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1572d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1572d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1572d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1572dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1572dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1572e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1572e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1572e4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1572e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1572e8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1572e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1572ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1572ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1572f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1572f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1572f4: 0xac247508  sw          $a0, 0x7508($at)
    ctx->pc = 0x1572f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1572f8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1572f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1572fc: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x1572fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x157300: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x157300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x157304: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x157304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x157308: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x157308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15730c: 0x9422fd64  lhu         $v0, -0x29C($at)
    ctx->pc = 0x15730cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5CFD64u));
    // 0x157310: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x157310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x157314: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x157314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x157318: 0xa422fd64  sh          $v0, -0x29C($at)
    ctx->pc = 0x157318u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFD64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CFD64u, _value); } while (0);
    // 0x15731c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15731cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x157320: 0x9422fd64  lhu         $v0, -0x29C($at)
    ctx->pc = 0x157320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5CFD64u));
    // 0x157324: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x157324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x157328: 0x28410059  slti        $at, $v0, 0x59
    ctx->pc = 0x157328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x15732c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15732Cu;
    {
        const bool branch_taken_0x15732c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15732c) {
            ctx->pc = 0x157340u;
            return;
        }
    }
    ctx->pc = 0x157334u;
    // 0x157334: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x157334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x157338: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x157338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15733c: 0xa424fd64  sh          $a0, -0x29C($at)
    ctx->pc = 0x15733cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5CFD64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CFD64u, _value); } while (0);
    ctx->pc = 0x157340u;
}
